/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:08:47 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/17 12:00:51 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*t_s1;
	unsigned char	*t_s2;

	i = 0;
	t_s1 = (unsigned char *)s1;
	t_s2 = (unsigned char *)s2;
	while (i < n && (t_s1[i] != '\0' || t_s2[i] != '\0'))
	{
		if (t_s1[i] != t_s2[i])
			return (t_s1[i] - t_s2[i]);
		i++;
	}
	return (0);
}
