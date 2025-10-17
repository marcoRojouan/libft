/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:27:01 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/17 11:43:42 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_nbrlen(int nbr)
{
	int	nbr_count;

	nbr_count = 1;
	while (!(nbr < 10) || !(nbr > -10))
	{
		nbr = nbr / 10;
		nbr_count += 1;
	}
	if (nbr < 0)
		return (nbr_count + 1);
	else
		return (nbr_count);
}

char	*ft_itoa(int nbr)
{
	char	*str_nbr;
	int		len;

	len = ft_nbrlen(nbr);
	if (nbr == -2147483648)
	{
		str_nbr = ft_strdup("-2147483648");
		return (str_nbr);
	}
	str_nbr = malloc(sizeof(char) * (len + 1));
	if (!str_nbr)
		return (0);
	if (nbr < 0)
	{
		str_nbr[0] = '-';
		nbr *= -1;
	}
	str_nbr[len] = '\0';
	while (nbr > 0)
	{
		str_nbr[len - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return (str_nbr);
}
