/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:01:18 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/25 21:24:38 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<ctype.h>

int	ft_isalnum(int c);

int	ft_isalnum(int c)
//int	ft_isalnum(char moji)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
	{
		if (c < '0' || c > '9')
			return (0);
		else
			return (1);
	}
	else
		return (1);
}

//
//int	main(void)
//{
//	printf("[origin]=%d\n", isalnum('a'-1));
//	printf("[ft]=%d\n", ft_isalnum('a'-1));
//	printf("=========\n");
//	return (0);
//}
//
