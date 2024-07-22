/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:49:59 by marvin            #+#    #+#             */
/*   Updated: 2024/07/20 12:49:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *str, char c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)str ;
	while (n-- > 0)
	{
		*p++ = (unsigned char )c;
	}
	return (str);
}
