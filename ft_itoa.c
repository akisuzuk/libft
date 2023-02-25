/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 08:38:35 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/25 10:19:44 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ifplus(int n);
char	*ifminus(int n);
char	*ifzero(char *ret);
char	*store_max(char *ret);
char	*ft_itoa(int n);

char	*ifplus(int n)
{
	int		digit;
	int		temp;
	char	*ret;

	digit = 0;
	temp = n;
	while (temp != 0)
	{
		temp /= 10;
		digit++;
	}
	ret = malloc(sizeof(char) * (digit + 1));
	ret[digit] = '\0';
	while (n != 0)
	{
		ret[digit - 1] = n % 10 + '0';
		n /= 10;
		digit--;
	}
	return (ret);
}

char	*ifminus(int n)
{
	int		digit;
	int		temp;
	char	*ret;

	n *= -1;
	digit = 0;
	temp = n;
	while (temp != 0)
	{
		temp /= 10;
		digit++;
	}
	ret = malloc(sizeof(char) * (digit + 2));
	ret[0] = '-';
	ret[digit + 1] = '\0';
	while (n != 0)
	{
		ret[digit] = n % 10 + '0';
		n /= 10;
		digit--;
	}
	return (ret);
}

char	*ifzero(char *ret)
{
	ret[0] = '0';
	ret[1] = '\0';
	return (ret);
}

char	*store_max(char *ret)
{
	ret[0] = '-';
	ret[1] = '2';
	ret[2] = '1';
	ret[3] = '4';
	ret[4] = '7';
	ret[5] = '4';
	ret[6] = '8';
	ret[7] = '3';
	ret[8] = '6';
	ret[9] = '4';
	ret[10] = '8';
	ret[11] = '\0';
	return (ret);
}

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return (store_max(malloc(sizeof(char) * 12)));
	else if (n == 0)
		return (ifzero(malloc(sizeof(char) * 2)));
	else
	{
		if (n < 0)
			return (ifminus(n));
		else
			return (ifplus(n));
	}
	return (0);
}

//int	main(void)
//{
//	char *result;
//
//	//result = ft_itoa(-12345);
//	result = ft_itoa(-123);
//	printf("ft_itoa = %s\n", result);
//	free(result);
//	return (0);
//}
//
