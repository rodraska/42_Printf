/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:39:45 by rreis-de          #+#    #+#             */
/*   Updated: 2022/11/02 18:40:52 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stddef.h>
# include "libft/libft.h"

int		ft_printf(const char *placeholders, ...);
void	ft_printf_c(int c);
void	ft_printf_s(char *s);
void	ft_printf_d(int	n);

#endif