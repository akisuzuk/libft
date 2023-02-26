/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 08:38:35 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/26 20:22:08 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str);

long	nega(long ret, const char *str)
{
	while (*str >= '0' && *str <= '9')
	{
		if (ret < LONG_MIN / 10)
			return ((int)LONG_MIN);
		if (ret == LONG_MIN / 10 && -(*str - '0') < LONG_MIN % 10)
			return ((int)LONG_MIN);
		ret = ret * 10 - (*str - '0');
		str++;
	}
	return (ret);
}

long	posi(long ret, const char *str)
{
	while (*str >= '0' && *str <= '9')
	{
		if (ret > LONG_MAX / 10)
			return (LONG_MAX);
		if (ret == LONG_MAX / 10 && *str - '0' > LONG_MAX % 10)
			return (LONG_MAX);
		ret = ret * 10 + (*str - '0');
		str++;
	}
	return (ret);
}

int	ft_atoi(const char *str)
{
	long	sign;
	long	ret;

	ret = 0;
	sign = 1;
	while (*str == 0 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (*str < '0' || *str > '9')
		return (0);
	else
	{
		if (sign == 1)
			ret = posi(ret, str);
		else
			ret = nega(ret, str);
	}
	return ((int)ret);
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
//	printf("---test21--------\n");
//	printf("orgin_atoi = %d\n", atoi("-9223372036854775808"));
//	printf("ft_atoi = %d\n", ft_atoi("-9223372036854775808"));
//	printf("---test28--------\n");
//	printf("orgin_atoi = %d\n", atoi("-9223372036854775809"));
//	printf("ft_atoi = %d\n", ft_atoi("-9223372036854775809"));
//	printf("---test35--------\n");
//	printf("orgin_atoi = %d\n", atoi("-9223372036854775807"));
//	printf("ft_atoi = %d\n", ft_atoi("-9223372036854775807"));
//	//printf("---test34--------\n");
//	//printf("orgin_atoi = %d\n", atoi("9223372036854775806"));
//	//printf("ft_atoi = %d\n", ft_atoi("9223372036854775806"));
//	//printf("---test36--------\n");
//	//printf("orgin_atoi = %d\n", atoi("18446744073709551614"));
//	//printf("ft_atoi = %d\n", ft_atoi("18446744073709551614"));
//	return (0);
//}

//ret = ret*10 + str[i] - '0';
