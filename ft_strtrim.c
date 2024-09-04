/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:01:46 by marvin            #+#    #+#             */
/*   Updated: 2024/09/04 14:01:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (!s)
		return (NULL);
	start = 0;
	while (s[start] && ft_isspace(s[start]))
		start++;
	end = ft_strlen(s);
	while (end > start && ft_isspace(s[end - 1]))
		end--;
	trimmed = ft_substr(s, start, end - start);
	return (trimmed);
}
