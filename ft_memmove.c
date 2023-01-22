/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:15:47 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/22 18:51:26 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

// 	restrictが使えないならmemcpyと一緒だよね。。。？
void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int					i;
	int					int_len;
	unsigned char		*unchar_dst;
	const unsigned char	*cons_unchar_src;

	if (len != 0)
	{
		i = 0;
		unchar_dst = (unsigned char *)dst;
		cons_unchar_src = (const unsigned char *)src;
		int_len = (int)len;
		while (i < int_len)
		{
			*unchar_dst++ = *cons_unchar_src++;
			i++;
		}
		return (unchar_dst);
	}
	return (dst);
}

int	main(void)
{
	char	str1[256];
	char	str2[256];
	int		n;

	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = 'd';
	str1[4] = 'e';
	str1[5] = '\0';
	str2[0] = 'A';
	str2[1] = 'B';
	str2[2] = 'C';
	str2[3] = '\0';
	n = 0;
	printf("str1=%s\n", str1);
	printf("%s\n", str2);
	//ft_memmove(str1+1, str2, 2);
	memmove(str1+1, str2, 2);
	printf("str1=%s\n", str1);
	printf("%s\n", str2);

	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
	char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

	//ft_memmove(s0, s, 7);
	//memmove(s0, s, 7);
	printf("s=%s\n", s);
	ft_memmove(s, s+2, 2);
	//memmove(s, s+2, 2);
	printf("result=%s\n", s);
	return (0);
}
