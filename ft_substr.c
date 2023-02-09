/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:09:35 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/09 22:04:24 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*head;

	if(!s)
		return (NULL);
	ret = malloc(len + 1);
	if(!ret)
		return (NULL);
	head = ret;
	while(start-- && *s != '\0')
	{
		printf("loop\n");
		s++;
	}
		//s++;
	while(len-- && *s != '\0')
		*ret++ = *s++;
	*ret = '\0';
	return (head);
}

//int	main(void)
//{
//	char	str1[] = "abcdefgh";
//	char	*sub;
//
//	printf("str1=%s\n", str1);
//	sub = ft_substr(str1, 2, 3);
//	printf("ret=%s\n", sub);
//	free(sub);
//}
//