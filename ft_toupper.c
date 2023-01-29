/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:53:22 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/28 18:41:42 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 一瞬なんで引数がintになるのか混乱したけど、
// あれか、文字で入れると文字コードの数字として読み込んでくれる感じね

#include<unistd.h>
#include <stdio.h>

int	ft_toupper(int c);

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*
int main(void)
{
	printf("ret=%c\n", ft_toupper('f'));
	return (0);
}
*/