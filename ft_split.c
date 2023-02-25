/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:00:36 by akisuzuk          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/02/23 17:44:58 by akisuzuk         ###   ########.fr       */
=======
/*   Updated: 2023/02/25 00:11:28 by akisuzuk         ###   ########.fr       */
>>>>>>> f897e6f5bc3f686f89217859aea9a74c4b9a7df5
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "libft.h"

char	**free_func(char **ret, size_t size);
char	**ft_split(char const *s, char c);

char	**free_func(char **ret, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(ret[i]);
	free(ret);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t		count;
	char		**ret;
	size_t		i;
	size_t		j;
	size_t		head;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	ret = malloc(sizeof(char *) * (count + 1));
	if (!ret)
		return (NULL);
	i = 0;
	j = 0;

	// -----ここから関数分離-----

	while (i < count)
	{
		while (s[j] != '\0')
		{
			if (j == 0 && s[j] != c)
			{
				head = j;
				break ;
			}
			if (j > 0 && s[j] != c && s[j - 1] == c)
			{
				head = j;
				break ;
			}
			j++;
		}
		while (s[j] && s[j] != c)
			j++;
		ret[i] = malloc(sizeof(char) * (j - head + 1));
<<<<<<< HEAD
		if (!ret[i])
			return (free_func(ret, i));
=======
>>>>>>> f897e6f5bc3f686f89217859aea9a74c4b9a7df5
		ft_memmove(ret[i], s + head, j - head);
		ret[i][j - head] = '\0';
		i++;
		j++;
	}
	ret[i] = NULL;
	return (ret);
}

// #include <string.h>
// int	main(void)
// {
// 	char	*splitme;
// 	char	**tab;
// 	int		i;
//
// 	splitme = strdup("--1-2--3---4----5-----42");
// 	tab = ft_split(splitme, '-');
// 	i = 0;
// 	while (tab[i])
// 		printf("ret=%s\n", tab[i++]);
//
// //	char	str1[] = "--1-2--3---4----5-----42";
// //	char	str2 = '-';
// 	//char	str1[] = " abc  def ghi  ";
// 	//char	str2 = ' ';
//
// //	char	**joined;
// //	int		i;
// //
// //	printf("str1=%s\n", str1);
// //	printf("str2=%c\n", str2);
// //	joined = ft_split(str1, str2);
// //	i = 0;
// //	while(joined[i])
// //	{
// //		printf("ret=%s\n", joined[i]);
// //		i++;
// //	}
// //	free(joined);
// }

//gcc ft_split.c -g -fsanitize=address -fsanitize=undefined


//size_t	count_words(char const *s, char c)
//{
//	size_t	count;
//	size_t	i;
//
//	count = 0;
//	i= 0;
//	while (s[i])
//	{
//		if (s[i] != c)
//		{
//			count++;
//			while (s[i] && s[i] != c)
//				i++;
//		}
//		else
//			i++;
//	}
//	return (count);
//}
