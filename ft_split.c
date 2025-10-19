/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:25:43 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/16 15:25:43 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_split(char **tab, int j)
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

int	ft_wordlen(const char *str, char sep)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != sep)
		len++;
	return (len);
}

char	*ft_strndup(const char *str, char sep)
{
	int		len;
	int		i;
	char	*tab;

	len = ft_wordlen(str, sep);
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != sep)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';fg
	return (tab);
}

int	ft_count_words(const char *str, char sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] != sep) && (i == 0 || str[i - 1] == sep))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(const char *str, char sep)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (ft_count_words(str, sep) + 1));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		if ((str[i] != sep) && (i == 0 || str[i - 1] == sep))
		{
			tab[j] = ft_worddup(str + i, sep);
			if (!tab[j])
			{
				free_split(tab, j);
				return (NULL);
			}
			j++;
		}
		i++;
	}
	tab[j] = NULL;
	return (tab);
}
