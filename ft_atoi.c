/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 08:38:35 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/07 23:15:22 by akisuzuk         ###   ########.fr       */
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
		while (*str >= '0' && *str <= '9')
		{
			ret = ret * 10 + (*str - 48);
			str++;
		}
	}
	ret *= nega;
	return (ret);
}


//int	main(int argc, char *argv[])
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
//	printf("ft_atoi = %d\n", ft_atoi("-42lyon42"));
//	printf("atoi = %d\n", atoi("-42lyon42"));
//	return (0);
//}

//ret = ret*10 + str[i] - '0';