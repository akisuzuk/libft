/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:35:53 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/27 21:58:38 by akisuzuk         ###   ########.fr       */
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
int		ft_strlen(char *str);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif //__INCLUDE_LIBFT_H__
