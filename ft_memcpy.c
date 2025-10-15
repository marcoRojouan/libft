/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:25:47 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/14 14:44:54 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memmove(void *dest, const void *src, size_t n);

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *tmp_src;
    unsigned char *tmp_dest;
    int i;

    tmp_src = (unsigned char*) src;
    tmp_dest = (unsigned char*) dest;
    i = 0;
    if (dest > src)
        ft_memmove(dest, src, n);
    while(i < n)
    {
        tmp_dest[i] = tmp_src[i];
        i++;
    }
    return (dest);
}