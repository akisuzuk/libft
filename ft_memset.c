/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:15:47 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/22 15:33:53 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// マジで勘違いしてたんですけど、bはstrとは限らないので
// b[i]=cみたいな記述方法自体が間違いだったみたいです。。。
// 構造体とか、なんならタダのintとかの可能性すらある
// なので、unchar-ｂ++みたいな書き方にして、
// ただポインタをズラしてくだけの書き方の方が無難かも

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	int				int_len;
	unsigned char	unchar_c;
	unsigned char	*unchar_b;

	i = 0;
	unchar_b = (unsigned char *)b;
	unchar_c = (unsigned char)c;
	int_len = (int)len;
	while (i < int_len)
	{
		*unchar_b++ = unchar_c;
		i++;
		write(1, "loop\n", 5);
	}
	return (unchar_b);
}

//int	main(void)
//{
//	char	str1[256];
////	char	str2[256];
//	int		n;
//
//	str1[0] = 'a';
//	str1[1] = 'b';
//	str1[2] = 'c';
//	str1[3] = 'd';
//	str1[4] = 'e';
//	str1[5] = '\0';
////	str2[0] = 'A';
////	str2[1] = 'B';
////	str2[2] = 'C';
////	str2[3] = '\0';
//	n = 0;
//	printf("str1=%s\n", str1);
////	printf("%s\n", str2);
//	// memetは配列要素を0アウトして初期化するのに有効らしい。なので
//	// なので普通は第３引数を第一引数にする
//	// まあ確かに普通に使うだけならstrncpyとかと変わらんなとは思ってた
//	// ていうか、だから第一引数がcharなのに挿入される第二引数が0なんだね
//	ft_memset(str1+1, 1, 2);
//	printf("str1=%s\n", str1);
////	printf("%s\n", str2);
//	printf("------------\n");
//	return (0);
//}


//void	*ft_memset(void *b, int c, size_t len)
//{
//	int				i;
//	int				int_len;
//	unsigned char	unchar_c;
//	unsigned char	*unchar_b;
//	char			*ret;
//
//	i = 0;
//	unchar_b = (unsigned char *)b;
//	unchar_c = (unsigned char)c;
//	int_len = (int)len;
//	printf("unchar_c=%hhu\n", unchar_c);
//	printf("int_len=%d\n", int_len);
//	while (i < int_len)
//	{
//		unchar_b[i] = unchar_c;
//	//	char_b[i] = 'X'; // 例えばこれだと消えずにちゃんと文字が置き換えられる。。。
//		i++;
//		write(1, "loop\n", 5);
//	}
//	//ret = (char *)unchar_b;
//	//printf("ret=%s\n", unchar_b);
//	return (unchar_b);
//}