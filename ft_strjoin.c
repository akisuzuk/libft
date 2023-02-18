/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:40:53 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/18 11:52:26 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// 今更ですがstrcatとstrjoinの違いは、mallocで全く新しい領域を作るかどうか、だけだよね
// catは片方のケツのアドレスにもう片方のアタマのアドレスを連結するだけ

// storeの中身、最初これで書いてたけど格納されない。。。何故。。。
	/*
	while (*pre)
		*ret++ = *pre++;
	while (*suf)
		*ret++ = *suf++;
	return (ret);
	*/

// 空文字列""の処理がわからんな。。。
// 前後に\0が入る可能性考慮してmallocで文字量=@にしちゃったけど問題なかっただろうか
// どっちにしろ前後に\0入れる場合はstoreでなんとかするしかないっすね
// とりあえず”42”とjoin("", "42")は明確に違うということはわかった。

// ★※★※★まだsubstr完成してないからこれ終わったらやること

// ft_strjoin("", "42")がいつまでも合わねえ！って思ってたら。テスター見るに
// 最初のEOSは無視されて'4' '2' '\0' になるぽいね。。。
// 仕様にないことを察して実装するのは萎えるわ〜

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char	*store(char *pre, char *suf, char *ret);
char	*store_2(char *suf, char *ret, int j);
int		ft_strlen(char *str);
char	*generate(char *pre, char *suf);
char	*ft_strjoin(char const *s1, char const *s2);

char	*store_2(char *suf, char *ret, int j)
{
	int	i;

	i = 0;
	if (suf[i] == '\0')
		ret[j] = '\0';
	else
	{
		while (suf[i] != '\0')
		{
			ret[j] = suf[i];
			i++;
			j++;
		}
	}
	return (ret);
}

char	*store(char *pre, char *suf, char *ret)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (pre[i] != '\0')
	{
		while (pre[i] != '\0')
		{
			ret[j] = pre[i];
			i++;
			j++;
		}
	}
	ret = store_2(suf, ret, j);
	return (ret);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*generate(char *pre, char *suf)
{
	int		prelen;
	int		suflen;
	char	*ret;

	prelen = ft_strlen(pre);
	suflen = ft_strlen(suf);
	ret = (char *)malloc((prelen + 1 + suflen + 1) * sizeof(char));
	return (ret);
}

char	*ft_strjoin(char const *s1, char const *s2)
//char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*char_s1;
	char	*char_s2;
	char	*ret;
	int		prelen;
	int		suflen;

	char_s1 = (char *)s1;
	char_s2 = (char *)s2;
	ret = generate(char_s1, char_s2);
	ret = store(char_s1, char_s2, ret);
	prelen = ft_strlen(char_s1);
	suflen = ft_strlen(char_s2);
	if (prelen + suflen == 0)
		*ret = '\0';
	else
		ret[prelen + suflen] = '\0';
	return (ret);
}

//int	main(void)
//{
//	char	str1[] = "tripouille";
//	char	str2[] = "42";
//	char	*joined;
//
//	printf("str1=%s\n", str1);
//	printf("str2=%s\n", str2);
//	joined = ft_strjoin(str1, str2);
//	// あれっこれ公式関数が存在しない？
//	//joined = strjoin(str1, str2);
//	printf("ret=%s\n", joined);
//	printf("strcmp=%d\n", strcmp(joined, "42"));
//	free(joined);
//}
//