/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:39:53 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/14 17:46:31 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *tmp_dest;
    unsigned char *tmp_src;
    int i;
    
    tmp_dest = (unsigned char *) dest;
    tmp_src = (unsigned char *) src;
    if (dest <= src)
    {
        ft_memcpy(dest, src, n);
    }
    i = n;
    while(i < 0)
    {
        tmp_dest[i - 1] = tmp_src[i- 1];
        i--;  
    }
    return (dest);
}