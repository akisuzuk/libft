/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_OLD_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:00:36 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/23 13:56:10 by akisuzuk         ###   ########.fr       */
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

	printf("check!\n");
	printf("src=%c\n", src);
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
	int		kugiri;
	char	**arr;
	char	**ret;
	int		i;
	int		j;
	int		head;

	count = 0;
	len = 0;
	kugiri = 0;
	while (s[len] != '\0')
	{
		if (s[len] != c && (s[len + 1] == c || s[len + 1] == '\0'))
			count++;
		if (s[len] == c)
			kugiri++;
		len++;
	}
	printf("len=%d\n", len);
	printf("kugiri=%d\n", kugiri);
	printf("=============\n");
	arr = malloc(sizeof(char *) * (len - kugiri + 1));
	ret = arr;
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
		printf("head=%d\n", head);
		while (s[j + 1] != c)
			j++;
		printf("j=%d\n", j);
		arr[i] = malloc(sizeof(char) * (j - head + 1));
		printf("j-head=%d\n", j - head);
		// ↓ここの第二引数s[head]で通らないの謎だな。。。
		ft_memcpy(arr[i], s + head, j - head + 1);
		arr[i][j- head + 1] = '\0';
		i++;
	}
	return (ret);
	
	// このiはlenをリユースした方がいいかも
//	i = 0;
//	while (i < count)
//	{
//		printf("LOOP\n");
//		j = 0;
//		while (s[j] != c)
//			j++;
//		j++;
//		printf("j=%d\n", j);
//		//*arr = (char *)malloc(sizeof(char) * j);
//		arr[i] = malloc(sizeof(char) * j);
//		//ft_memcpy(*arr, s, j - 1);
//		ft_memcpy(arr[i], s, j - 1);
//		printf("arr=%s\n", arr[i]);
//		arr[i][j-1] = '\0';
//		s += j;
//		arr++;
//		i++;
//	}
//	return (ret);
	
}

int	main(void)
{
	//char	str1[] = "  tripouille  42  ";
	char	str1[] = "  tripouille 42  tokyo ";
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


//gcc ft_split.c -g -fsanitize=address -fsanitize=undefined
