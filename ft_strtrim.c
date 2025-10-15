/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:49:50 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/15 15:35:33 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(const char *s1, const char *set)
{
    char    *s2;
    int s1len;

    s1len = ft_strlen(s1);
    s2 = NULL;
    s2 = malloc(sizeof(char *) * (s1len - 2));
}