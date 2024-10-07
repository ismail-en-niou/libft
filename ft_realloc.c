/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:30:07 by marvin            #+#    #+#             */
/*   Updated: 2024/09/18 15:30:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *src, size_t srcsize, size_t newsize)
{
	void	*ret;

	if (!src)
		return (NULL);
	ret = ft_memalloc(newsize);
	ft_memcpy(ret, src, MIN(srcsize, newsize));
	free(src);
	return (ret);
}
