/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:50:05 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/18 12:50:05 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	wordcounts(char const *str, char sep)
{
	int i;
	int count;

	i = 0;
	count = 0; 
	while (str[i])
	{
		if (str[i] != sep && (i = 0 || i - 1 == sep))
			count++;
		i++;
	}
	return (count);
}
char	**ft_split(char const *str, char sep)
{
	int	i;
	int	j;
	char **tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * wordcounts(str, sep));
	if (!tab)
		return (NULL);
	while (str[i])
		if (str[i] != sep && (i = 0 || i - 1 == sep))
			tab[j] = duplicate_word(str, sep);
		

}
