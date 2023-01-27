/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:10:05 by akisuzuk          #+#    #+#             */
/*   Updated: 2022/03/25 17:45:56 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	slen;
	unsigned int	dlen;
	unsigned int	i;

	slen = 0;
	while (src[slen] != '\0')
		slen++;
	dlen = 0;
	while (dest[dlen] != '\0')
		dlen++;
	i = 0;
	while (i < size - dlen - 1)
	{
		dest[dlen + i] = src[i];
		if (i == size - 1 || i == slen - 1)
		{
			dest[dlen + i + 1] = '\0';
			return (slen + dlen);
		}
		i++;
	}
	return (slen + dlen);
}

/*
int	main(void)
{
	char			str1[10];
	char			str2[4];
	unsigned int	n;

	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = '\0';
	str1[4] = '\0';
	str1[5] = '\0';
	str1[6] = '\0';
	str1[7] = '\0';
	str1[8] = '\0';
	str1[9] = '\0';
	str2[0] = 'd';
	str2[1] = 'e';
	str2[2] = 'f';
	str2[3] = '\0';
	n = sizeof(str1);
	printf("sizeof str1=%d\n", n);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("ret = %d\n", ft_strlcat(str1, str2, n));
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("-------------\n");
	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = '\0';
	str1[4] = '\0';
	str1[5] = '\0';
	str1[6] = '\0';
	str1[7] = '\0';
	str1[8] = '\0';
	str1[9] = '\0';
	str2[0] = 'd';
	str2[1] = 'e';
	str2[2] = 'f';
	str2[3] = '\0';
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("ret = %lu\n", strlcat(str1, str2, n));
	printf("%s\n", str1);
	printf("%s\n", str2);
	return (0);
}
*/
/*
int	main(void)
{
	char	dest[10];
	char	src[];
	int		i;
	char	dest[10];
	char	dest[10];

	dest[10] = "abc";
	src[] = "def";
	i = 0;
	while (i < 11)
	{
		dest[10] = "abc";
		printf("--------------\n");
		printf("i = %d, \tstrlcat = %lu\n", i, strlcat(dest, src, i));
		printf("dest= %s\n", dest);
		i++;
	}
	printf("======================\n");
	i = 0;
	while (i < 11)
	{
		dest[10] = "abc";
		printf("--------------\n");
		printf("i = %d, \tft_strlcat = %u\n", i, ft_strlcat(dest, src, i));
		printf("dest= %s\n", dest);
		i++;
	}
	return (0);
}
*/