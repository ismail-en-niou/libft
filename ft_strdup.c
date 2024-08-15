/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:47:33 by marvin            #+#    #+#             */
/*   Updated: 2024/07/23 18:47:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*src;

	j = strlen(s);
	i = 0;
	src = (char *)malloc(sizeof(char) * (j + 1));
	while (s[i])
	{
		src[i] = s[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
