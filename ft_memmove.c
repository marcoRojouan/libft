/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:39:53 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/16 15:11:32 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *tmp_dest;
	unsigned char *tmp_src;
	size_t i;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (dest <= src)
	{
		ft_memcpy(dest, src, n);
	}
	i = n - 1;
	while (i > 0)
	{
		tmp_dest[i - 1] = tmp_src[i - 1];
		i--;
	}
	return (dest);
}