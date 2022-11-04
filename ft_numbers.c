/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:02:32 by rreis-de          #+#    #+#             */
/*   Updated: 2022/11/03 14:28:34 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_d(int n, int *ptl)
{
	(*ptl) += ft_strlen(ft_itoa(n));
	ft_putnbr_fd(n, 1);
}

void	ft_printf_u(long unsigned int n, int *ptl)
{
	if (n >= 0)
		ft_itoa_base(n, "0123456789", ptl);
	else if (n < 0)
		ft_itoa_base(4294967296 - n, "0123456789", ptl);
}

void	ft_itoa_base(long int n, char *base, int *ptl)
{
	int	size;

	size = ft_strlen(base);
	if (n >= size)
	{
		ft_itoa_base(n / size, base, ptl);
		ft_putchar_fd(base[n % size], 1);
		(*ptl)++;
	}
	else if (n < size)
	{
		ft_putchar_fd(base[n], 1);
		(*ptl)++;
	}
}
