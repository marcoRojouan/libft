/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:04:58 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/14 17:09:45 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *strchr(const char *s, int c)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (unsigned char) c)
            return (&s[i]);
        i++;    
    }
    return (0);
}
