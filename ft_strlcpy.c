/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:07:27 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/17 12:01:00 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *str, size_t destlen)
{
	int	slen;

	slen = ft_strlen(str);
	if (slen + 1 < destlen)
	{
		ft_memcpy(dest, str, slen + 1);
	}
	else if (destlen != 0)
	{
		ft_memcpy(dest, str, destlen - 1);
	}
	return (slen);
}
