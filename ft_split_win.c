/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:40:53 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/19 21:07:21 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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

char	**ft_split(char const *s, char c)
{
	int		count;
	int		len;
	char	**arr;
	char	**ret;
	int		i;
	int		j;

	count = 0;
	len = 0;
	while (*s++)
	{
		if (*s == c)
			count++;
		len++;
	}
	printf("count=%d\n", count);
	s -= (len + 1);
	printf("len=%d\n", len);
	arr = malloc(sizeof(char *) * (len + 1));
	ret = arr;
	i = 0;
	while (i < count + 1)
	{
		printf("LOOP\n");
		j = 0;
		while (s[j] != c)
			j++;
		j++;
		printf("j=%d\n", j);
		//*arr = (char *)malloc(sizeof(char) * j);
		arr[i] = malloc(sizeof(char) * j);
		printf("CHECK3\n");
		//ft_memcpy(*arr, s, j - 1);
		ft_memcpy(arr[i], s, j - 1);
		// printf("arr=%s\n", *arr);
		printf("CHECK4\n");
		arr[i][j-1] = '\0';
		// printf("arr=%s\n", *arr);
		s += j;
		arr++;
		i++;
	}
	//*(arr[i]) = '\0';
	printf("end\n");
	return (ret);
}

int	main(void)
{
	//char	str1[] = "  tripouille  42  ";
	char	str1[] = "tripouille 42 ";
	char	str2 = ' ';
	char	**joined;
	int		i;

	printf("str1=%s\n", str1);
	printf("str2=%c\n", str2);
	joined = ft_split(str1, str2);
	i = 0;
	while(i < 10)
	{
		printf("ret=%s\n", joined[i]);
		i++;
	}
	//printf("strcmp=%d\n", strcmp(joined, "42"));
	free(joined);
}