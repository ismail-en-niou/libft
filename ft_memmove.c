/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:39:44 by marvin            #+#    #+#             */
/*   Updated: 2024/07/22 10:39:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	l;

	l = 0;
	if (s2 < s1)
	{
		l = n;
		while (l > 0)
		{
			l--;
			((unsigned char *)s1)[l] = ((unsigned char *)s2)[l];
		}
	}
	else
	{
		l = 0;
		while (l < n)
		{
			((unsigned char *)s1)[l] = ((unsigned char *)s2)[l];
			l++;
		}
	}
	return (s1);
}
