/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:20:44 by marvin            #+#    #+#             */
/*   Updated: 2024/07/23 19:20:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sepa(char c, char sep)
{
	return (c == sep);
}

static	int	ft_count_word(char const *str, char c)
{
	int	i;
	int	count;

	i = 0 ;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sepa(str[i], c))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_sepa(str[i], c))
			i++;
	}
	return (count);
}

static char	*str_mini_cpy(char *src, char sep, char *dest)
{
	int	i;

	i = 0;
	while (src[i] && !is_sepa(src[i], sep))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	str_len(char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] && !is_sepa(str[i], sep))
		i++;
	return (i);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	char	**split;

	i = 0;
	j = 0;
	split = (char **)malloc(sizeof(char *) * (ft_count_word(str, c) + 1));
	if (!split)
		return (NULL);
	while (str[i])
	{
		while (is_sepa(str[i], c) && str[i])
			i++;
		if (str[i])
		{
			split[j] = (char *)malloc(sizeof(char) * (str_len(&str[i], c) + 1));
			str_mini_cpy(&str[i], c, split[j]);
			j++;
			while (str[i] && !is_sepa(str[i], c))
				i++;
		}
	}
	split[j] = NULL;
	return (split);
}
