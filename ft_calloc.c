/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:38:00 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/26 14:28:16 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// アホなのでNULL判定をcount * size > SIZE_MAXでやってたけど掛け算した時点でオーバーフローするんだよ

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include "libft.h"

void	*ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);

void	*ft_bzero(void *s, size_t n)
{
	int				i;
	int				int_n;
	unsigned char	*unchar_s;

	if (n != 0)
	{
		int_n = (int)n;
		unchar_s = (unsigned char *)s;
		i = 0;
		while (i < int_n)
		{
			*unchar_s++ = '\0';
			i++;
		}
		return (unchar_s);
	}
	return (s);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	//if (count > (size_t)SIZE_MAX / size)
	if (size != 0 && count > (size_t)SIZE_MAX / size)
		return (NULL);
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
//
//int	main(void)
//{
//	char	*ch;
//	char	*ft_ch;
//
//	ft_ch = (char *)ft_calloc(SIZE_MAX, 0);
//	ch = (char *)calloc(1, 100);
//	free(ft_ch);
//	free(ch);
//	return (0);
//}
//