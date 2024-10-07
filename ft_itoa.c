/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:34:30 by marvin            #+#    #+#             */
/*   Updated: 2024/09/21 19:34:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	talis(int n)
{
	int		i;
	long	x;

	x = n;
	i = 1;
	if (x < 0)
	{
		i++;
		x *= -1;
	}
	while (n > 9)
	{
		x = x / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int x)
{
	int		len;
	char	*res;
	int		sign;
	long	n;

	n = x;
	len = talis(n);
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	if (sign)
		res[0] = '-';
	while (len-- > sign)
	{
		res[len] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}
