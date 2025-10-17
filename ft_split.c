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

int	ft_count_words(const char *str, char sep)
{
	int	count;
	int	in_words;
	int	i;

	count = 0;
	in_words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != sep && in_words == 0)
		{
			in_words = 1;
			count++;
		}
		else if (str[i] == sep)
			in_words = 0;
		i++;
	}
	return (count);
}

char	*ft_strndup(const char *str, int len)
{
	int		i;
	char	*duplicata;

	duplicata = NULL;
	duplicata = malloc(sizeof(char) * len + 1);
	if (!duplicata)
		return (0);
	i = 0;
	while (i < len)
	{
		duplicata[i] = str[i];
		i++;
	}
	duplicata[i] = '\0';
	return (duplicata);
}

char	*just_splitting(const char *str, char sep, int *i)
{
	int		start;
	int		word_len;
	char	*result;

	result = NULL;
	while (str[*i] == sep)
		(*i)++;
	if (str[*i] != sep)
	{
		start = *i;
		while (str[*i] && str[*i] != sep)
			(*i)++;
		word_len = (*i) - start;
		result = ft_strndup(str + start, word_len);
	}
	return (result);
}

char	**ft_split(char const *str, char sep)
{
	char	**tab;
	char	*word;
	int		i;
	int		j;
	int		word_count;

	i = 0;
	j = 0;
	word_count = ft_count_words(str, sep);
	tab = NULL;
	tab = malloc(sizeof(char *) * (word_count + 1));
	if (!tab)
		return (0);
	while (str[i])
	{
		word = just_splitting(str, sep, &i);
		if (word)
		{
			tab[j] = word;
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}
