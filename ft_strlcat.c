/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:10:05 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/07 22:34:31 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 最後の返り値。count does not include NUL であることに注意
// あああああああああああああああ定義間違えてたああああああああああ
// dstsize分追加じゃなくて、最大size-strlen(dst)-1バイト文字列を追加、だったわ。。。
// カスすぎる。。。アルゴリズムは絶対合ってると思ってたので、おかしいと思ってた
// 長考しすぎなくてよかったけど半日消し飛んでクソすぎる。。。
// だから引数をそのまま使わずに新しく変数定義してたのか。。。書き込む量を計算するために...

// dstsizeを実際のdstの大きさに指定するのが前提、という点に注意
// テスターは空気読まずにdstsizeに整数入れてくるかも知んねえけど、
// dlen=d-dstは基本的にはdstのサイズと一致するという前提

// ここも完全に盲点だったけど、戻り値は作成しようと"試みる"文字列の長さらしいです
// なので、if(n=0)の処理で実際に結合していないのに戻り値は足した数を吐いてるのか...
// もう関わりたくねえこいつwww

// で、結合するwhileの中でn!=1にしてるのは「size-strlen(dst)-1バイト」の「-1バイト」ってことね

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = dst;
	s = src;
	n = dstsize;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = dstsize - dlen;
	if (n == 0)
		return (dlen + strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

/*
int	main(void)
{
	// あれっターミナルの検証がうまくいってなかったの、printfの書式とかが原因か。。。？
	char			str1[] = "AAAAAAAAAA";
	const char			str2[] = "BBB";
	
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("ret = %zu\n", ft_strlcat(str1, str2, sizeof(str1)));
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("-------------\n");

	char			str3[] = "AAAAAAAAAA";
	char			str4[] = "BBB";
	printf("%s\n", str3);
	printf("%s\n", str4);
	printf("ret = %zu\n", strlcat(str3, str4, sizeof(str3)));
	printf("%s\n", str3);
	printf("%s\n", str4);
	return (0);
}
*/

/*
int	main(void)
{
	char	dest[10];
	char	src[];
	int		i;
	char	dest[10];
	char	dest[10];

	dest[10] = "abc";
	src[] = "def";
	i = 0;
	while (i < 11)
	{
		dest[10] = "abc"; printf("--------------\n");
		printf("i = %d, \tstrlcat = %lu\n", i, strlcat(dest, src, i));
		printf("dest= %s\n", dest);
		i++;
	}
	printf("======================\n");
	i = 0;
	while (i < 11)
	{
		dest[10] = "abc";
		printf("--------------\n");
		printf("i = %d, \tft_strlcat = %u\n", i, ft_strlcat(dest, src, i));
		printf("dest= %s\n", dest);
		i++;
	}
	return (0);
}
*/