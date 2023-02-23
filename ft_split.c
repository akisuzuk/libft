/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:00:36 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/23 17:40:13 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n);
char	**ft_split(char const *s, char c);

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int					i;
	int					int_n;
	unsigned char		*unchar_dst;
	const unsigned char	*cons_unchar_src;

	if (n != 0)
	{
		i = 0;
		unchar_dst = (unsigned char *)dst;
		cons_unchar_src = (const unsigned char *)src;
		int_n = (int)n;
		while (i < int_n)
		{
			*unchar_dst++ = *cons_unchar_src++;
			i++;
		}
		return (dst);
	}
	return (dst);
}

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
	char	**ret;
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
	//printf("count=%d\n", count);
	//ret = malloc(sizeof(char *) * (len - kugiri + 1));
	// 勘違いしてたけど外側のmallocは要素数だけハコ作ればok(マジキチのブログ参照)
	//ret = malloc(sizeof(char *) * 7);
	ret = malloc(sizeof(char *) * (count + 1));
	if (!ret)
		return (NULL);
	i = 0;
	j = 0;
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
		//if (!ret[i])
		//	return (free_func(ret, i));
		ft_memmove(ret[i], s + head, j - head);
		// ft_memcpy(ret[i], s + head, j - head);
		ret[i][j - head] = '\0';
		i++;
		j++;
	}
	ret[i] = NULL;
	return (ret);
}

size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i= 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
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
