/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:39:45 by rreis-de          #+#    #+#             */
/*   Updated: 2022/11/04 16:05:57 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stddef.h>
# include <limits.h>
# include "libft/libft.h"

int		ft_printf(const char *placeholders, ...);
void	ft_printf_c(int c, int *ptl);
void	ft_printf_s(char *s, int *ptl);
void	ft_printf_d(int n, int *ptl);
void	ft_printf_u(unsigned int n, int *ptl);
void	ft_printf_p(unsigned long int n, int *ptl);
void	ft_itoa_base(unsigned long int n, char *base, int *ptl);

#endif