/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:01:37 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/25 20:06:04 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	output(int num[], int i, int fd);
void	ft_putnbr_fd(int n, int fd);

void	output(int num[], int i, int fd)
{
	char	opc;

	while (i > 0)
	{
		opc = num[i - 1] + '0';
		write(fd, &opc, 1);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int	num[12];
	int	i;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		i = 0;
		while (n != 0)
		{
			num[i] = n % 10;
			n /= 10;
			i++;
		}
		output(num, i, fd);
	}
}

//
//int	main(void)
//{
//	ft_putnbr_fd(-2147483648, 1);
//	printf("\n");
//	ft_putnbr_fd(123456789, 1);
//	printf("\n");
//	ft_putnbr_fd(-123, 1);
//	printf("\n");
//	ft_putnbr_fd(0, 1);
//	printf("\n");
//	ft_putnbr_fd(-123, 1);
//	printf("\n");
//	ft_putnbr_fd(-2, 1);
//	printf("\n");
//	return (0);
//}
//
//
