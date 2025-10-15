/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:56:54 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/15 10:48:31 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *tmp;
    
    tmp = (unsigned char*) s;
    i = 0;
    while(i < n)
    {    
        tmp[i] = '\0';
        i++;
    }
    return (s);
}