/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:40:53 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/18 15:58:55 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// テストケースを見るに、スペースは詰められるみたいですね

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int		ft_strlen(char *str);
char	*ft_strtrim(char const *s1, char const *set);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*head;
	char	*ret;
	int		i;

	if (! s1)
		return (NULL);
	if (! set)
		return ((char *)s1);
	ret = malloc(sizeof(char) * ft_strlen((char *)s1) + 1);
	if (!ret)
		return (NULL);
	head = ret;
	while (*s1)
	{
		i = 0;
		while (*set)
		{
			if (*s1 == *set)
				break ;
			set++;
			if (*set == '\0')
				*ret++ = *s1;
			i++;
		}
		set = set - i;
		s1++;
	}
	*ret = '\0';
	return (head);
}

//
//int	main(void)
//{
//	char	str1[] = "123";
//	char	str2[] = "";
//	char	*joined;
//
//	printf("str1=%s\n", str1);
//	printf("str2=%s\n", str2);
//	joined = ft_strtrim(str1, str2);
//	printf("ret=%s\n", joined);
//	//printf("strcmp=%d\n", strcmp(joined, "42"));
//	free(joined);
//}
//
