/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:38:13 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/20 12:47:26 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int occ, size_t n)
{
	unsigned char	*tmp_s;
	size_t			i;

	i = 0;
	tmp_s = (unsigned char *)str;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (tmp_s[i] == (unsigned char)occ)
			return ((void *)&tmp_s[i]);
		i++;
	}
	return (NULL);
}
