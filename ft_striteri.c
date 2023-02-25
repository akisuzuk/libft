/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:32:54 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/25 15:25:48 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t			len;
	unsigned int	i;

	len = ft_strlen((char *)s);
	i = 0;
	while (i < (unsigned int)len)
		f(i++, s++);
	s -= len;
}
//
//void	iter(unsigned int i, char *s)
//{
//	*s += i;
//}
//
//int	main(void)
//{
//	char	str[] = "12345";
//	int		i;
//
//	ft_striteri(str, iter);
//	i = 0;
//	while (i < 6)
//	{
//		printf("result=%c\n", str[i]);
//		i++;
//	}
//	return (0);
//}
//