/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:40:49 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/04 12:11:04 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// あっわかったわwhileをインクリメントで回しちゃってるから
// 2重ループもなんなら一致した時の戻り値もズレたやつになっちゃってるたぶん
// テストケースと擦り合わせながらゴリゴリ確認してけばいけるはず...!

// size_tがマイナスの場合の処理はまだわかりません。ていうかsize_tに負の値を代入するな
// とか思ったけど、もしかしてこれsize_tにマイナス入れてバカデカ数字にして全検索させるテクだったりします？

// ここでもうずれてる？チェック
// ズレてなかった。whileのインクリメントはループ処理された後に適用されるのか。
// ありがたい。。。！

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		j;
	char	*ret;

	if (needle[0] == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len)
	{
		if (*haystack == needle[0])
		{
			ret = (char *)haystack;
			j = 0;
			while (*haystack == needle[j] && len--)
			{
				if (needle[j + 1] == '\0')
					return (ret);
				j++;
				haystack++;
			}
			haystack = haystack - j;
			len = len + j;
		}
		haystack++;
		len--;
	}
	return (0);
}

//
//int	main(void)
//{
//	char	str1[] = "aaabcabcd";
//	char	str2[] = "aabc";
//
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("myfunc ret = %s\n", ft_strnstr(str1, "abcd", 9));
//	printf("origin ret = %s\n", strnstr(str1, "abcd", 9));
//	return (0);
//}
//