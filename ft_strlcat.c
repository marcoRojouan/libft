/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:07:20 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/17 12:01:19 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size < 1)
		return (srclen + size);
	while (src[i] && srclen < size - 1)
	{
		dst[srclen] = src[i];
		srclen++;
		i++;
	}
	dst[srclen] = '\0';
	srclen = ft_strlen(src);
	if (size < dstlen)
		return (srclen + size);
	else
		return (dstlen + srclen);
}
