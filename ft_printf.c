/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:10:44 by rreis-de          #+#    #+#             */
/*   Updated: 2022/11/02 18:42:00 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_d(int	n)
{
	long int	nbr;

	nbr = (long)n;
	if (nbr == -2147483648)
	{
		ft_printf_c('-');
		ft_printf_c('2');
		ft_printf_d(147483648);
	}
	else if (nbr < 0)
	{
		ft_printf_c('-');
		ft_printf_d(-nbr);
	}
	else if (nbr > 9)
	{
		ft_printf_d(nbr / 10);
		ft_printf_d(nbr % 10);
	}
	else if (nbr < 10)
		ft_printf_c(nbr + 48);
}

void	ft_printf_s(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	ft_printf_c(int c)
{
	write(1, &c, 1);
}

void	ft_data_type(char data_type, va_list args)
{
	if (data_type == 'c')
		ft_printf_c(va_arg(args, int));
	else if (data_type == 's')
		ft_printf_s(va_arg(args, char *));
	//else if (data_type == 'p')
		//ft_printf_p(va_arg(args, void *));
	else if (data_type == 'd')
		ft_printf_d(va_arg(args, int));
	/*else if (data_type == 'i')
		ft_printf_i(va_arg(args, int));
	else if (data_type == 'u')
		ft_printf_u(va_arg(args, unsigned int));
	else if (data_type == 'x')
		ft_printf_x(va_arg(args, int));
	else if (data_type == 'X')
		ft_printf_X(va_arg(args, int));*/
}

int	ft_printf(const char *placeholders, ...)
{
	va_list	args;
	int		i;
	char	data_type;

	va_start(args, placeholders);
	i = 0;
	while (placeholders[i])
	{
		if (placeholders[i] == '%')
		{
			data_type = placeholders[i + 1];
			ft_data_type(data_type, args);
		}
		else
			write(1, &placeholders[i], 1);
		i++;
	}
	va_end(args);
	return (ft_strlen(placeholders));
}

int	main(void)
{
	ft_printf("%d, %s, %c", 5, "hello world", 'a');
	//printf("ola amigos %d\n", 5);
	return (0);
}