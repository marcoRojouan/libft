/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:49:50 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/17 13:04:43 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	set_startend(const char *s1, const char *set, int *start, int *end)
{
	*start = 0;
	while (s1[*start] && ft_strchr(set, s1[*start]))
		(*start)++;
	*end = ft_strlen(s1) - 1;
	while (*end >= *start && ft_strchr(set, s1[*end]))
		(*end)--;
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	int		len;
	char	*trimstr;

	if (!s1 || !set)
		return (NULL);
	set_startend(s1, set, &start, &end);
	if(end < start)
		len = 0;
	else
		len = end - start;
	trimstr = malloc(sizeof(char) * (len + 1));
	if (!trimstr)
		return (NULL);
	ft_memcpy(trimstr, s1 + start, len);
	trimstr[len] = '\0';
	return (trimstr);
}
