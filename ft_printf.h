/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:39:45 by rreis-de          #+#    #+#             */
/*   Updated: 2022/11/03 14:08:06 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stddef.h>
# include "libft/libft.h"

int		ft_printf(const char *placeholders, ...);
void	ft_printf_c(int c, int *ptl);
void	ft_printf_s(char *s, int *ptl);
void	ft_printf_d(int n, int *ptl);
void	ft_printf_u(long unsigned int n, int *ptl);
void	ft_printf_p(long unsigned int n, int *ptl);
void	ft_itoa_base(long int n, char *base, int *ptl);

#endif