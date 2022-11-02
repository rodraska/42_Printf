/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:26:10 by rreis-de          #+#    #+#             */
/*   Updated: 2022/10/22 16:26:10 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char *str, char *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*new;

	start = 0;
	while (str[start] && check_set(set, str[start]) == 1)
		start++;
	end = ft_strlen(str);
	while (end > start && check_set(set, str[end - 1]) == 1)
		end--;
	new = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (start < end)
	{
		new[i] = str[start];
		i++;
		start++;
	}	
	new[i] = 0;
	return (new);
}
