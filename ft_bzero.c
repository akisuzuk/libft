/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:15:47 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/22 15:41:40 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_bzero(void *s, size_t n);

void	*ft_bzero(void *s, size_t n)
{
	int				i;
	int				int_len;
	unsigned char	unchar_c;
	unsigned char	*unchar_b;

	i = 0;
	unchar_b = (unsigned char *)b;
	unchar_c = (unsigned char)c;
	int_len = (int)len;
	while (i < int_len)
	{
		*unchar_b++ = unchar_c;
		i++;
		write(1, "loop\n", 5);
	}
	return (unchar_b);
}

int	main(void)
{
	char	str1[256];
//	char	str2[256];
	int		n;

	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = 'd';
	str1[4] = 'e';
	str1[5] = '\0';
//	str2[0] = 'A';
//	str2[1] = 'B';
//	str2[2] = 'C';
//	str2[3] = '\0';
	n = 0;
	printf("str1=%s\n", str1);
	ft_memset(str1+1, 1, 2);
	printf("str1=%s\n", str1);
	printf("------------\n");
	return (0);
}
