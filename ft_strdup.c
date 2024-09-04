/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:50:04 by marvin            #+#    #+#             */
/*   Updated: 2024/08/21 14:50:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char	*ret;

	ret = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	ret = ft_strcpy(ret, s);
	return (ret);
}
