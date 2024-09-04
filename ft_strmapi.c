/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:11:59 by marvin            #+#    #+#             */
/*   Updated: 2024/09/04 13:11:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*rest;

	if (!s || !f)
		return (NULL);
	rest = ft_strnew(ft_strlen(s));
	if (!rest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		rest[i] = f(i, s[i]);
		i++;
	}
	return (rest);
}
