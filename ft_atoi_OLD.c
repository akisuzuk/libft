/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 08:38:35 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/26 15:40:25 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// テストケースの文字コード0, 9-13はisspaceと呼ばれる奴ら
// 先頭であれば、何文字続いてもスルーできる
// man isspaceで概要を確認

#include "libft.h"

int	ft_atoi(const char *str);

int	ft_atoi(const char *str)
{
	int	nega;
	int	ret;

	ret = 0;
	nega = 1;
	while (*str == 0 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			nega = -1;
		str++;
	}	
	if (*str < '0' || *str > '9')
		return (0);
	else
	{
		//while (*str >= '0' && *str <= '9')
		while(*str != '\0')
		{
			ret = ret * 10 + (*str - '0');
			str++;
		}
	}
	return (ret * nega);
}

//int	main(void)
//{
//	//char escape[] = {9, 10, 11, 12, 13, 0};
//	char escape[] = {9, 10, 11, 12, 13, 0};
//
//	//argc = 1;
//	//printf("str=%s\n", argv[1]);
//	//printf("str=%s\n", escape);	
//	//printf("ft_atoi = %d\n", ft_atoi(escape));
//	printf("str=%s\n", escape);	
//	printf("---test27--------\n");
//	printf("orgin_atoi = %d\n", atoi("9223372036854775808"));
//	printf("ft_atoi = %d\n", ft_atoi("9223372036854775808"));
//	printf("---test28--------\n");
//	printf("orgin_atoi = %d\n", atoi("-9223372036854775809"));
//	printf("ft_atoi = %d\n", ft_atoi("-9223372036854775809"));
//	printf("---test34--------\n");
//	printf("orgin_atoi = %d\n", atoi("9223372036854775806"));
//	printf("ft_atoi = %d\n", ft_atoi("9223372036854775806"));
//	printf("---test36--------\n");
//	printf("orgin_atoi = %d\n", atoi("18446744073709551614"));
//	printf("ft_atoi = %d\n", ft_atoi("18446744073709551614"));
//	return (0);
//}
//
//ret = ret*10 + str[i] - '0';


//int	res;
//	int	sign;
//	int	i;
//
//	if (*str == '\0')
//		return (0);
//	res = 0;
//	sign = 1;
//	i = 0;
//	if (str[0] == '-')
//	{
//		sign = -1;
//		i++;
//	}
//	for(; str[i] != '\0'; ++i)
//	{
//		if (str[i] <= '0' || str[i] >= '9')
//			return (0);
//		res = res * 10 + str[i] - '0';
//	}
//	return (sign * res);

#include <stdio.h>

int main(void)
{
	printf("%d\n", atoi("-9223372036854775803"));
	printf("%d\n", atoi("-9223372036854775804"));
	printf("%d\n", atoi("-9223372036854775805"));
	printf("%d\n", atoi("-9223372036854775806"));
	printf("%d\n", atoi("-9223372036854775807"));
	printf("INT_MIN%d\n", atoi("-9223372036854775808"));
	printf("%d\n", atoi("-9223372036854775809"));
	printf("%d\n", atoi("-9223372036854775810"));
	printf("%d\n", atoi("-9223372036854775811"));
	return (0);
}



while ()
{
	if (ret > LONG_MAX / 10 || )
		return ((int)LONG_MAX)
	ret = ret * 10 + % 10
}


long max = 12345
1.  
2345 > 12345 / 10
return (LONG_MAX)

2.  
1234 == 12345 / 10 && str[i] - '0' >  12345 % 10
return (LONG_MAX)


ret 2345 * 10 
ret 1234



strtol
