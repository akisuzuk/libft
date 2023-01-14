/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:01:18 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/14 17:30:31 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<ctype.h>

int	ft_isalnum(char moji);

int	ft_isalnum(char moji)
{
	if ((moji < 'a' || moji > 'z') && (moji < 'A' || moji > 'Z'))
	{
		if (moji < '0' || moji > '9')
			return (0);
		else
			return (1);
	}
	else
		return (1);
}

/*
int	main(void)
{
	char	moji1;
	char	moji2;
	char	moji3;

	moji1 = 'c';
	moji2 = '3';
	moji3 = '?';
	printf("[origin]moji1=%d\n", isalnum(moji1));
	printf("[origin]moji2=%d\n", isalnum(moji2));
	printf("[origin]moji3=%d\n", isalnum(moji3));
	printf("[ft]moji1=%d\n", ft_isalnum(moji1));
	printf("[ft]moji2=%d\n", ft_isalnum(moji2));
	printf("[ft]moji3=%d\n", ft_isalnum(moji3));
	return (0);
}
*/