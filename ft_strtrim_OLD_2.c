/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:40:53 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/19 13:09:07 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char	*ft_strtrim(char const *s1, char const *set);
char	*search_head(char const *s1, char const *set);
char	*search_tail(char const *s1, char const *set, char const *head);

char	*search_tail(char const *s1, char const *set, char const *head)
{
	int		i;
	char	*tail;

	tail = (char *)s1 - 1;
	while (head <= s1)
	{
		i = 0;
		while (*set)
		{
			if (*s1 == *set)
			{
				set = set - i;
				break ;
			}
			set++;
			if (set == head)
			{
				tail = (char *)s1;
				return (tail);
			}
			i++;
		}
		s1--;
	}
	return (tail);
}
// #include <stdio.h>
// 
// int main(void)
// {
// 	char	str[10] = "42toky4o4";
// 
// 	printf("%s\n", search_tail(&str[9], "4", str));
// 	printf("%s\n", search_tail(&str[9], "4", str));
// 	return (0);
// }

char	*search_head(char const *s1, char const *set)
{
	int		i;
	char	*head;

	head = (char *)s1;
	while (*s1)
	{
		i = 0;
		while (*set)
		{
			if (*s1 == *set)
			{
				set = set - i;
				break ;
			}
			set++;
			if (*set == '\0')
			{
				head = (char *)s1;
				return (head);
			}
			i++;
		}
		s1++;
	}
	return (head);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*head;
	char	*tail;
	char	*ret;
	char	*tmp;

	if (!s1 || !set)
		return (NULL);
	if (!*s1)
		return (calloc(1, 1));
	head = search_head(s1, set);
	while (*s1)
		s1++;
	tail = search_tail(s1, set, head);
	ret = malloc(sizeof(char *) * ((char *)tail - (char *)head) + 1);
	if (!ret)
		return (NULL);
	tmp = ret;
	while (head <= tail)
		*tmp++ = *head++;
	*tmp = '\0';
	// *(++tail) = '\0';
	return (ret);
}
//
//42tokyo
//42t
//
//okyo
//
//
//
//
//
//int	main(void)
//{
//	char	str1[] = "   xxxtripouille";
//	char	str2[] = " x";
//	char	*joined;
//	printf("str1=%s\n", str1);
//	printf("str2=%s\n", str2);
//	joined = ft_strtrim(str1, str2);
//	printf("ret=%s\n", joined);
//	//printf("strcmp=%d\n", strcmp(joined, "42"));
//	free(joined);
//}
//
//
////abaaacdaaaaaef
////set = ab
////     →cdaaaaaef


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*ret;
// 	size_t	i;
// 	size_t	head;
// 	size_t	tail;

// 	if (!s1)
// 		return (NULL);
// 	if (!set || s1[0] == '\0' || set[0] == '\0')
// 		return ((char *)s1);
// 	head = 0;
// 	while (strchr(set, s1[head]))
// 		head++;
// 	tail = strlen(s1) - 1;
// 	while (strchr(set, s1[tail]) && head < tail)
// 		tail--;
// 	ret = malloc(sizeof(char *) * (tail - head + 1));
// 	if (!ret)
// 		return (NULL);
// 	i = 0;
// 	while (head <= tail)
// 		ret[i++] = s1[head++];
// 	ret[i] = '\0';
// 	return (ret);
// }
