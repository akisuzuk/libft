/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:24:46 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/27 21:58:52 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
//unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	size_t			len;
	unsigned int	i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (i < dstsize)
	{
		if (i == dstsize - 1)
		{
			dst[i] = '\0';
		}
		else
		{
			dst[i] = src[i];
		}
		i++;
	}
	return (len);
}

/*
int	main(void)
{
	char			str1[6];
	char			str2[4];
	int				n;
	unsigned int	ret;

	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = 'd';
	str1[4] = 'e';
	str1[5] = '\0';
	str2[0] = 'F';
	str2[1] = 'G';
	str2[2] = 'H';
	str2[3] = '\0';
	n = 2;
	printf("%s\n", str1);
	printf("%s\n", str2);
	ret = ft_strlcpy(str1, str2, n);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%d\n", ret);
	return (0);
}
*/