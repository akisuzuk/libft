/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:05:42 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/14 13:58:16 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ライブラリをリンクして実行するためだけのファイル
// コンパイルの仕方は
// gcc libtest.c libft.a -o libtest.exe
// おおお行けた

#include<stdio.h>

//libft.h記述されてるけど、本体の方でもプロトタイプ宣言必要
int	ft_isalpha(char moji);

int	main(void)
{
	printf("ft_isalpha(c)=%d\n", ft_isalpha('c'));
	printf("ft_isalpha(3)=%d\n", ft_isalpha('3'));
}
