/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 08:38:35 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/23 16:22:27 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);

char	*ft_itoa(int n)
//int	ft_atoi(const char *str)
{
	char	*ret;
	int		i;
	char	flag;
	int		digit;

	flag = 'X';
	if (n == -2147483648)
	{
		//write(1, "-2147483648", 11);
		ret = malloc(sizeof(char) * 12);
	}
	else if (n == 0)
	{
		ret = malloc(sizeof(char) * 2);
		ret[0] = '0';
		ret[1] = '\0';
	}
	else
	{
		i = 0;
		if (n < 0)
		{
			flag = '-';
			n *= -1;
		}
		digit = 0;
		while (n != 0)
		{
			n /= 10;
			digit++;
		}
		if (flag == '-')
		{
			ret = malloc(sizeof(char) * (digit + 2));
			ret[0] = '-';
			i++;
		}
		else
			ret = malloc(sizeof(char) * (digit + 1));
		while (n != 0)
		{
			ret[i] = n % 10;
			n /= 10;
			i++;
		}
		return (ret);
	}
	return (ret);
}

//int	main(int argc, char *argv[])
int	main(void)
{
	//char escape[] = {9, 10, 11, 12, 13, 0};
	//char escape[] = {9, 10, 11, 12, 13, 0};
	
	//argc = 1;
	//printf("str=%s\n", argv[1]);
	//printf("str=%s\n", escape);	
	//printf("ft_atoi = %d\n", ft_atoi(escape));
	printf("ft_itoa = %s\n", ft_itoa(12345));
	return (0);
}

//ret = ret*10 + str[i] - '0';