/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:45:10 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/17 11:57:51 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *str, void (*func)(unsigned int, char *))
{
	int	i;

	if (!str || !func)
		return ;
	i = 0;
	while (str[i])
	{
		func(i, str + i);
		i++;
	}
}
