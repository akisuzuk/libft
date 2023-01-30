/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 11:30:57 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/29 16:52:46 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 今回はstrchrと違って引数sが文字列と限らない(void)なのでchar型に直す必要ありっすね
// うーんn=0の時はwhileもifもかっ飛ばすからnull返すはずなのに(実際ローカルでは返してる)
// なんかテスターと整合しないんで不本意ながらアタマにif(n==0)をつけた。。。

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*char_s;
	unsigned char	unchar_c;

	if (n == 0)
		return (NULL);
	char_s = (char *)s;
	unchar_c = (unsigned char)c;
	while (n--)
	{
		if (*char_s == unchar_c)
			return (char_s);
		char_s++;
	}
	if (unchar_c == 0 && *char_s == unchar_c)
		return (char_s);
	return (NULL);
}

/*
int	main(void)
{
	char	test[] = "tripouille";
	char	*p;

	//printf("%c\n", 't'+1);
	
	//p = ft_memchr(test, 0, 0);
	p = memchr(test, 0, 0);
	printf("ret= %s\n", p);
	return (0);
}
*/