/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_FAILED.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:10:05 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/28 17:18:56 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	totallen;
	size_t	countlen;

	totallen = 0;
	while (*dst++ != '\0')
		totallen++;
	countlen = 0;
	while (countlen <= dstsize && *src)
	{
		if (countlen == 0)
		{
			*--dst = *src++;
		}
		else
		{
			*dst++ = *src++;
		}
		countlen++;
		totallen++;
	}
	*dst = '\0';
	return (totallen);
}

//
//int	main(void)
//{
//	char			str1[] = "AAAAAAAAAA";
//	const char			str2[] = "BBBBBBBBBB";
//	
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("ret = %zu\n", ft_strlcat(str1, str2, 3));
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("-------------\n");
//
//	char			str3[] = "AAAAAAAAAA";
//	char			str4[] = "BBBBBBBBBB";
//	printf("%s\n", str3);
//	printf("%s\n", str4);
//	printf("ret = %zu\n", strlcat(str3, str4, 3));
//	printf("%s\n", str3);
//	printf("%s\n", str4);
//	return (0);
//}







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