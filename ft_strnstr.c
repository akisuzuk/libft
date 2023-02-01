/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:40:49 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/01 23:45:32 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// あっわかったわwhileをインクリメントで回しちゃってるから
// 2重ループもなんなら一致した時の戻り値もズレたやつになっちゃってるたぶん
// size_tがマイナスの場合の処理はまだわかりません。ていうかsize_tに負の値を代入するな

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
//char	*ft_strnstr(char *str, char *to_find)
{
	int		j;
	char	*str;
	char	*to_find;
	int		int_len;
	char	*ret;

	j = 0;
	str = (char *)haystack;
	to_find = (char *)needle;
	if (to_find[0] == '\0')
		return (str);
	while (*str++ != '\0' && len--)
	{
		if (*str == to_find[0])
		{
			// ここでもうずれてる？チェック
			// ズレてなかった。whileのインクリメントはループ処理された後に適用されるのか。
			// ありがたい。。。！
			//printf("str=%c\n", *str);
			ret = str;
			j = 0;
			while (*str++ == to_find[j] && len--)
			{
				//printf("loop!\n");
				if (to_find[j + 1] == '\0')
					return (ret);
				j++;
			}
		}
	}
	return (0);
}

//int	main(void)
//{
//	char	str1[] = "aaabcabcd";
//	char	str2[] = "aabc";
//
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("myfunc ret = %s\n", ft_strnstr(str1, "ca", -1));
//	printf("origin ret = %s\n", strnstr(str1, "ca", -1));
//	return (0);
//}
//
