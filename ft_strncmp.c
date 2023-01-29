/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:00:11 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/29 15:10:26 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
//int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '0')
			return (0);
		if (i == n - 1)
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char			str1[4];
	char			str2[5];
	unsigned int	n;

	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = '\0';
	str2[0] = 'a';
	str2[1] = 'b';
	str2[2] = 'c';
	str2[3] = 'd';
	str2[4] = '\0';
	n = 4;
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("ret = %d\n", ft_strncmp(str1, str2, n));
	printf("-------------\n");
	printf("ret = %d\n", strncmp(str1, str2, n));
	return (0);
}
*/