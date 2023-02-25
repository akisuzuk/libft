/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:38:33 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/25 20:40:28 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 判定自体は文字コードが範囲に収まってるかで判定すればok
// 文字列じゃなくて文字か。CPC02-ex02は文字列なのでその要素にはなるか
// あとman読んだら
//"The isalpha() function returns zero
// if the character tests false
// and returns non-zero if the character tests true."
// とあったけど、non-zeroは1でtrue/falseが1/0に対応してるってことね

#include<stdio.h>
#include<unistd.h>
#include<ctype.h>

int	ft_isalpha(int c);

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	char	moji1;
	char	moji2;

	moji1 = 'c';
	moji2 = '3';
	printf("[origin]moji1=%d\n", isalpha(moji1));
	printf("[origin]moji2=%d\n", isalpha(moji2));
	printf("[ft]moji1=%d\n", ft_isalpha(moji1));
	printf("[ft]moji2=%d\n", ft_isalpha(moji2));
	return (0);
}
*/
