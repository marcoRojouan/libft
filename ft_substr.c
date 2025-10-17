/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:47:39 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/17 12:03:10 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t size)
{
	char	*tab;
	size_t	i;
	size_t	srclen;

	tab = NULL;
	srclen = ft_strlen(src);
	if (start > srclen)
		return (tab);
	if (size > srclen + start)
		size = srclen + start;
	tab = malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (0);
	i = 0;
	while (i < size)
	{
		tab[i] = src[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
