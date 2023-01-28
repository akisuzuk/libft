/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:15:47 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/27 21:48:59 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

// restrict禁止だったのかよ〜manの通りのプロトタイプ宣言がダメなこともあるのね
void	*ft_memcpy(void *dst, const void *src, size_t n);

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

//int	main(void)
//{
//	char	str1[256];
//	char	str2[256];
//	int		n;
//
//	str1[0] = 'a';
//	str1[1] = 'b';
//	str1[2] = 'c';
//	str1[3] = 'd';
//	str1[4] = 'e';
//	str1[5] = '\0';
//	str2[0] = 'A';
//	str2[1] = 'B';
//	str2[2] = 'C';
//	str2[3] = '\0';
//	n = 0;
//	printf("str1=%s\n", str1);
//	printf("%s\n", str2);
//	ft_memcpy(str1+1, str2, 2);
//	//memset(str1+1, 1, 2);
//	printf("str1=%s\n", str1);
//	printf("%s\n", str2);
//	return (0);
//}
//