/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:17:11 by marvin            #+#    #+#             */
/*   Updated: 2024/07/20 18:17:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size(int n)
{
	int	nb;

	if (n > 0)
	{
		nb = 1;
	}
	if (n < 0)
	{
		nb = 2;
		n = -n;
	}
	while (n > 9)
	{
		n /= 10;
		nb++;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char	*str;
	char	len;
	int		num;

	len = size(n);
	num = n;
	str = (char *)malloc(len * sizeof(char));
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else if (n == 0)
	{
		str[0] = '0';
	}
	str[len] = '\0';
	while (num != 0)
	{
		str[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (str);
}
