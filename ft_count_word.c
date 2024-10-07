/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:03:36 by marvin            #+#    #+#             */
/*   Updated: 2024/09/16 12:03:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_word(char const *src, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (src[i])
	{
		while (src[i] == c && src[i])
			i++;
		if (src[i] && src[i] != c)
			count++;
		while (src[i] != c && src[i])
			i++;
	}
	return (count);
}
