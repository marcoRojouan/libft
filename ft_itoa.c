/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:27:01 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/16 15:10:44 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int nbr)
{
	int	nbrCount;

	nbrCount = 1;
	while (!(nbr < 10) || !(nbr > -10))
	{
		nbr = nbr / 10;
		nbrCount += 1;
	}
	return (nbrCount);
}

char	*ft_itoa(int nbr)
{
	char	*str_nbr;
	int		len;

	len = ftNbrLen(nbr);
	str_nbr = NULL;
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
		len++;
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
