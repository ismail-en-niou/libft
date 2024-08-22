/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:45:10 by marvin            #+#    #+#             */
/*   Updated: 2024/08/22 11:45:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*rest;

	rest = dest;
	while (*dest)
		dest++;
	while (*src && n > 0)
	{
		*(dest++) = *(src++);
		n--;
	}
	*dest = 0;
	return (rest);
}
