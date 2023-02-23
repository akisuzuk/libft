/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 08:38:35 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/23 20:33:33 by akisuzuk         ###   ########.fr       */
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
	int		temp;

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
		printf("HIT!\n");
		i = 0;
		if (n < 0)
		{
			flag = '-';
			n *= -1;
		}
		digit = 0;
		temp = n;
		while (temp != 0)
		{
			temp /= 10;
			digit++;
		}
		printf("digit=%d\n", digit);
		if (flag == '-')
		{
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
		else
		{
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
	}
}

//int	main(int argc, char *argv[])
int	main(void)
{
	char *result;
	//char escape[] = {9, 10, 11, 12, 13, 0};
	//char escape[] = {9, 10, 11, 12, 13, 0};

	//argc = 1;
	//printf("str=%s\n", argv[1]);
	//printf("str=%s\n", escape);
	//printf("ft_atoi = %d\n", ft_atoi(escape));
	result = ft_itoa(-12345);
	printf("ft_itoa = %s\n", result);
	free(result);
	return (0);
}

//ret = ret*10 + str[i] - '0';



//void	output(int num[], int i)
//{
//	char	opc;
//
//	while (i > 0)
//	{
//		opc = num[i - 1] + '0';
//		write(1, &opc, 1);
//		i--;
//	}
//}
//
//void	ft_putnbr(int nb)
//{
//	int	num[12];
//	int	i;
//
//	if (nb == -2147483648)
//		write(1, "-2147483648", 11);
//	else if (nb == 0)
//		write(1, "0", 1);
//	else
//	{
//		if (nb < 0)
//		{
//			write(1, "-", 1);
//			nb *= -1;
//		}
//		i = 0;
//		while (nb != 0)
//		{
//			num[i] = nb % 10;
//			nb /= 10;
//			i++;
//		}
//		output(num, i);
//	}
//}
