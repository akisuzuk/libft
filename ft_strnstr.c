/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:40:49 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/31 22:03:36 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
//char	*ft_strnstr(char *str, char *to_find)
{
	int		j;
	char	*str;
	char	*to_find;
	int		int_len;

	j = 0;
	str = (char *)haystack;
	to_find = (char *)needle;
	//printf("len=%lu\n", len);
	if (to_find[0] == '\0')
		return (str);
	while (*str++ != '\0' && len--)
	{
		if (*str == to_find[0])
		{
			j = 0;
			while (*str++ == to_find[j] && len--)
			{
				if (to_find[j + 1] == '\0')
					return (str);
				j++;
			}
		}
	}
	return (0);
}

int	main(void)
{
	char	str1[] = "aaabcabcd";
	char	str2[] = "aabc";

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("myfunc ret = %s\n", ft_strnstr(str1, "c", -1));
	printf("origin ret = %s\n", strnstr(str1, "c", -1));
	return (0);
}
