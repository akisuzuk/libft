/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:15:47 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/15 17:31:26 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*memset(void *b, int c, size_t len);

void	*memset(void *b, int c, size_t len)
{
	
}

int	main(void)
{
	char	str1[6];
	char	str2[4];
	int		n;

	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = 'd';
	str1[4] = 'e';
	str1[5] = '\0';
	str2[0] = 'F';
	str2[1] = 'G';
	str2[2] = 'H';
	str2[3] = '\0';
	n = 0;
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("ans = %s\n", ft_strncpy(str1, str2, n));
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("------------\n");
	return (0);
}
