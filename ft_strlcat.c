/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:07:20 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/15 12:50:21 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    int dstlen;
    int srclen;
    int i;

    dstlen = ft_strlen(dst);
    srclen = ft_strlen(src);
    if (dstlen >= dstsize)
        dstlen = dstsize;
    if (dstlen == dstsize)
        return (dstlen + srclen);
    if (dstlen + srclen < dstsize)
    {    
        i = 0;
        while (src[i])
        {
            dst[dstlen + i] = src[i];
            i++;
        }
    } else {
        i = 0;
        while (dstlen + i < dstsize)
        {
            dst[dstlen + i] = src[i];
            i++;
        }
        dst[dstsize - 1] = '/0';
    }
    return (dstlen + srclen);
}