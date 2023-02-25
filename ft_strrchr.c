/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 11:30:57 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/25 22:30:04 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 戻り値のポインタとしては点としてのアドレスしかかえせないから
// はじめに配列をリバースした方が良さそう
// そうすれば検索のアルゴ自体はstrchrを転用できるし

// と思ったら別に逆向きに読む配列のポインタ返さんでもいいやんけ
// びっくりしたわ〜memreverse的なことするならmalloc???とか思ってたので。。。
// このサイト普通に間違ってますね。よくみてただけに困った。
// https://bituse.info/c_func/17

// うーんlast自体をフラグ化したかったのにうまくいかなかったのでint flagとかにしてしまった。。。

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	char		char_c;
	const char	*last;
	int			flag;

	last = 0;
	char_c = (char)c;
	while (*s)
	{
		if (*s == char_c)
		{
			last = s;
			flag = 1;
		}
		s++;
	}
	if (c == '\0')
	{
		last = s;
		flag = 1;
	}
	if (flag == 1)
		return ((char *)last);
	else
		return (NULL);
}

//
//int	main(void)
//{
//	char	test[] = "tripouille";
//	char	*p;
//
//	//printf("%c\n", 't'+1);
//	//p = strrchr(test, 0);
//	p = ft_strrchr(test, '\0');
//	printf("ret= %s\n", p);
//	// ↓ここのif文、pがnullの場合条件文でチェックするだけでセグフォ発動するので注意
//	if(*p == '\0')
//		printf("*p==EOS!\n");
//	if(p == NULL)
//		printf("*p==NULL!\n");
//	return (0);
//}
//
//
