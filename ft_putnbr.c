/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:01:37 by akisuzuk          #+#    #+#             */
/*   Updated: 2022/03/27 15:46:57 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);

void	output(int num[], int i)
{
	char	opc;

	while (i > 0)
	{
		opc = num[i - 1] + '0';
		write(1, &opc, 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int	num[12];
	int	i;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		i = 0;
		while (nb != 0)
		{
			num[i] = nb % 10;
			nb /= 10;
			i++;
		}
		output(num, i);
	}
}

/*
int	main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(123456789);
	printf("\n");
	ft_putnbr(-123);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(-123);
	printf("\n");
	ft_putnbr(-2);
	return (0);
}
*/