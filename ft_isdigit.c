/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 12:23:44 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/14 13:30:31 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<ctype.h>

int	ft_isdigit(char moji);

int	ft_isdigit(char moji)
{
	if (moji < '1' || moji > '9')
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
	printf("[origin]moji1=%d\n", isdigit(moji1));
	printf("[origin]moji2=%d\n", isdigit(moji2));
	printf("[ft]moji1=%d\n", ft_isdigit(moji1));
	printf("[ft]moji2=%d\n", ft_isdigit(moji2));
	return (0);
}
*/