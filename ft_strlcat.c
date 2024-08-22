/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:50:53 by marvin            #+#    #+#             */
/*   Updated: 2024/08/22 11:50:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	i;

	dest_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size <= dest_size)
		return (src_size + size);
	i = dest_size;
	while (*src && i + 1 < size)
		dst[i++] = *(src++);
	dst[i] = '\0';
	return (src_size + dest_size);
}
