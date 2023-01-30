/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 11:30:57 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/30 23:50:30 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
//void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*unchr_s1;
	unsigned char	*unchr_s2;

	if (n == 0)
		return (0);
	unchr_s1 = (unsigned char *)s1;
	unchr_s2 = (unsigned char *)s2;
	while (n--)
	{
		if (*unchr_s1 != *unchr_s2)
			return (*unchr_s1 - *unchr_s2);
		unchr_s1++;
		unchr_s2++;
	}
	return (0);
}

/*
int	main(void)
{
	char	s1[] = "abcdefg";
	char	s2[] = "abceefg";
	int		p;

	//p = memcmp(s1, s2, 0);
	p = ft_memcmp(s1, s2, 6);
	printf("ret= %d\n", p);
	return (0);
}
*/
