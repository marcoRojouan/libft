/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:04:34 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/20 10:53:50 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*func)(unsigned int, char))
{
	unsigned int	i;
	char			*tab;

	if (!str || !func)
		return (NULL);
	tab = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (str[i])
	{
		tab[i] = (*func)(i, str[i]);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
