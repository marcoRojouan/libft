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

static void	free_tab(char **tab, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	wordcounts(char const *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] != sep) && (i == 0 || str[i - 1] == sep))
			count++;
		i++;
	}
	return (count);
}

char	*duplicate_word(char const *str, char sep)
{
	char	*dup;
	int		i;
	int		len;

	len = 0;
	while (str[len] && str[len] != sep)
		len++;
	dup = malloc(sizeof(char) * len + 1);
	if (!dup)
		return (0);
	i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	fill_tab(char const *str, char sep, char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != sep && (i == 0 || str[i - 1] == sep))
		{
			tab[j] = duplicate_word(str + i, sep);
			if (!tab[j])
			{
				free_tab(tab, j);
				return (0);
			}
			j++;
		}
		i++;
	}
	tab[j] = NULL;
	return (1);
}

char	**ft_split(char const *str, char sep)
{
	char	**tab;
	int		word_number;

	if (!str)
		return (0);
	word_number = wordcounts(str, sep);
	tab = malloc(sizeof(char *) * (word_number + 1));
	if (!tab)
		return (0);
	if (!fill_tab(str, sep, tab))
		return (0);
	return (tab);
}
