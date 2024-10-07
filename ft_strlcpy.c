/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:38:53 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 14:38:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    if (!dst || !src)
        return (0);
    i = 0;
    while (src[i] && i + 1 < dstsize)
    {
        dst[i] = src[i];
        i++;
    }
    if (dstsize > 0)
        dst[i] = '\0';
    while (src[i])
        i++;
    return (i);
}
