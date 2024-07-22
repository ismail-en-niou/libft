/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:13:06 by marvin            #+#    #+#             */
/*   Updated: 2024/07/20 15:13:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*p;

	total = count * size;
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	p = malloc(total);
	if (!p)
		return (NULL);
	else
		ft_bzero(p, total);
	return (p);
}
