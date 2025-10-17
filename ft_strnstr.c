/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:59:58 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/17 12:02:18 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find)
		return (str);
	while (i < size && str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j])
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
