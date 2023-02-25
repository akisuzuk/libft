/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 12:23:44 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/25 21:08:34 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<ctype.h>

int	ft_isdigit(int c);

int	ft_isdigit(int c)
//int	ft_isdigit(char moji)
{
	//if (c - '0' >= '0' && c - '0' <= '9')
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

//
//int	main(void)
//{
//
//	for (int i = -256; i < 256; i++)
//	{
//		if(isdigit(i) != ft_isdigit(i))
//		{
//			printf("i=%d\n", i);
//			printf("c-'0'=%c\n", i - '0');
//			printf("[origin]isdigit=%d\n", isdigit(i));
//			printf("[ft]isdigit=%d\n", ft_isdigit(i));
//		}
//	}
//	return (0);
//}
//
