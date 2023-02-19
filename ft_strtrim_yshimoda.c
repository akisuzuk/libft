/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_yshimoda.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:40:53 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/19 14:54:53 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	i;
	size_t	head;
	size_t	tail;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	head = 0;
	while (strchr(set, s1[head]))
		head++;
	tail = strlen(s1) - 1;
	while (strchr(set, s1[tail]) && head < tail)
		tail--;
	ret = malloc(sizeof(char *) * (tail - head + 1));
	if (!ret)
		return (NULL);
	i = 0
	while (head < tail)
		ret[i++] = s1[head++];
	ret[i] = '\0';
	return (ret);
}

int	main(void)
{
	char	str1[] = "   xxxtripouille";
	char	str2[] = " x";
	char	*joined;
	printf("str1=%s\n", str1);
	printf("str2=%s\n", str2);
	joined = ft_strtrim(str1, str2);
	printf("ret=%s\n", joined);
	//printf("strcmp=%d\n", strcmp(joined, "42"));
	free(joined);
}