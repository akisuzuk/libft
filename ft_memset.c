/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:15:47 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/17 21:52:34 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	int				int_len;
	unsigned char	unchar;
	char			*char_b;

	i = 0;
	int_len = (int)len;
	unchar = (char)c;
	char_b = (char *)b;
	while (i < int_len && char_b[i] != '\0')
	{
		char_b[i] = unchar;
		i++;
	}
	return (char_b);
}

int	main(void)
{
	char	str1[256];
//	char	str2[256];
	int		n;

	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = 'd';
	str1[4] = 'e';
//	str1[5] = '\0';
//	str2[0] = 'A';
//	str2[1] = 'B';
//	str2[2] = 'C';
//	str2[3] = '\0';
	n = 0;
	printf("str1=%s\n", str1);
//	printf("%s\n", str2);
	// memetは配列要素を0アウトして初期化するのに有効らしい。なので
	// なので普通は第３引数を第一引数にする
	// まあ確かに普通に使うだけならstrncpyとかと変わらんなとは思ってた
	// ていうか、だから第一引数がcharなのに挿入される第二引数が0なんだね
	ft_memset(str1+1, 0, 2);
	printf("str1=%s\n", str1);
//	printf("%s\n", str2);
	printf("------------\n");
	return (0);
}
