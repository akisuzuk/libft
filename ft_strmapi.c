/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:32:54 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/25 14:44:22 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*ret;
	unsigned int	i;

	len = ft_strlen((char *)s);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (i < (unsigned int)len)
		*ret++ = f(i++, *s++);
	*ret = '\0';
	ret -= len;
	return (ret);
}

//char	addOne(unsigned int i, char c)
//{
//	return (i + c);
//}
//
//int	main(void)
//{
//	char	str[] = "12345";
//	char	*result;
//	int		i;
//
//	result = ft_strmapi(str, addOne);
//	// このループでセグフォ出てたけど多分最終ループであかんところにアクセスしてんのかな
//	// それか無限ループしてる？？
//	//while (*result)
//	//	printf("result=%c\n", *result++);
//	i = 0;
//	while(i < 6)
//	{
//		printf("result=%c\n", result[i]);	
//		i++;
//	}
//	free(result);
//	return (0);
//}
//