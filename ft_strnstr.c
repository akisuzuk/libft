/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:40:49 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/26 12:42:11 by akisuzuk         ###   ########.fr       */
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

char	*search(const char *haystack, const char *needle, size_t len)
{
	int		i;
	char	*ret;

	i = 0;
	while (*haystack != '\0' && len)
	{
		if (*haystack == needle[0])
		{
			ret = (char *)haystack;
			i = 0;
			while (*haystack == needle[i] && len--)
			{
				if (needle[i + 1] == '\0')
					return (ret);
				i++;
				haystack++;
			}
			haystack -= i;
			len += i;
		}
		haystack++;
		len--;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ret;

	if (haystack == NULL)
		return (NULL);
	if (needle[0] == '\0' || needle == NULL)
		return ((char *)haystack);
	ret = search(haystack, needle, len);
	if (ret)
		return (ret);
	else
		return (NULL);
}

//
//int	main(void)
//{
//	char	str1[] = "aaabcabcd";
//	char	str2[] = "aabc";
//
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("origin ret = %s\n", strnstr(str1, "abcd", 9));
//	printf("myfunc ret = %s\n", ft_strnstr(str1, "abcd", 9));
//	printf("---case114---\n");
//	printf("origin ret = %s\n", strnstr("", "", 0));
//	printf("myfunc ret = %s\n", ft_strnstr("", "", 0));
//	printf("---case115---\n");
//	printf("origin ret = %s\n", strnstr(NULL, "1", 0));
//	printf("myfunc ret = %s\n", ft_strnstr(NULL, "1", 0));
//	return (0);
//}
//