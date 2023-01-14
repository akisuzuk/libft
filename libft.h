/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:35:53 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/14 17:48:52 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// テスター用に色々インクルード
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <climits>
#include <limits.h>

int		ft_isalpha(char moji);
int		ft_isdigit(char moji);
int		ft_isalnum(char moji);
int		ft_isascii(char moji);
int		ft_isprint(char moji);

#endif //__INCLUDE_LIBFT_H__