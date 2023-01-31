/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:40:49 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/31 21:18:47 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*strnstr(const char *haystack, const char *needle, size_t len);

char	*strnstr(const char *haystack, const char *needle, size_t len)
//char	*ft_strnstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[i] != '\0' && len--)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && len--)
			{
				if (to_find[j + 1] == '\0')
					return (&str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	str1[10];
	char	str2[4];

	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = 'd';
	str1[4] = 'e';
	str1[5] = 'f';
	str1[6] = 'g';
	str1[7] = 'h';
	str1[8] = 'i';
	str1[9] = '\0';
	str2[0] = 'c';
	str2[1] = 'c';
	str2[2] = 'e';
	str2[3] = '\0';
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("ret = %s\n", ft_strstr(str1, str2));
	printf("-------------\n");
	printf("strncat = %s\n", strstr(str1, str2));
	return (0);
}
*/
