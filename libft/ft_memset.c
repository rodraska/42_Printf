/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:24:43 by rreis-de          #+#    #+#             */
/*   Updated: 2022/10/22 16:24:43 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*hold;

	hold = (unsigned char *)str;
	while (n > 0)
	{
		*hold = (unsigned char)c;
		hold++;
		n--;
	}
	return (str);
}
