/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 12:23:44 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/25 20:18:03 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<ctype.h>

int	ft_isascii(int c);

int	ft_isascii(int c)
//int	ft_isascii(char moji)
{
	if (c - 0 < 0 || c - 0 > 127)
		return (0);
	else
		return (1);
}

/*
int	main(void)
{
	char	moji1;
	char	moji2;

	moji1 = 'c';
	moji2 = '3';
	printf("[origin]moji1=%d\n", isascii(moji1));
	printf("[origin]moji2=%d\n", isascii(moji2));
	printf("[ft]moji1=%d\n", ft_isascii(moji1));
	printf("[ft]moji2=%d\n", ft_isascii(moji2));
	return (0);
}
*/
