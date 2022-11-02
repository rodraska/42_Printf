/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:25:50 by rreis-de          #+#    #+#             */
/*   Updated: 2022/10/22 16:25:50 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t n)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (n <= dst_len)
		return (n + src_len);
	while (src[i] && dst_len + i < n - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (i < n)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
