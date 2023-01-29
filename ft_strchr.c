/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 11:30:57 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/29 14:00:55 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// あーテストケースの3つ目のKO、終端文字をサーチしてないということか
// 腹ただしいなww

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	char	char_c;

	char_c = (char)c;
	while (*s)
	{
		if (*s == char_c)
			return ((char *)s);
		s++;
	}
	if (c == 0 && *s == c)
		return ((char *)s);
	return (NULL);
}

//
//int	main(void)
//{
//	char	test[] = "tripouille";
//	char	*p;
//
//	//printf("%c\n", 't'+1);
//	
//	p = ft_strchr(test, 0);
//	//p = strchr(test, 0);
//	printf("ret= %s\n", p);
//	return (0);
//}
//