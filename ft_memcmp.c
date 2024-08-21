/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:13:36 by marvin            #+#    #+#             */
/*   Updated: 2024/08/21 14:13:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t x;

	x = -1;
	while (++x < n)
	{
		if(((t_byte *)s1)[x] !=  ((t_byte *)s2)[x])
			return (((t_byte *)s1)[x] -  ((t_byte *)s2)[x]) ;
	}
	return (0);
}
