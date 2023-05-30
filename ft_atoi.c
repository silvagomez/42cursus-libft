/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:42:52 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 14:23:17 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts ASCII string to integers value.

int	ft_atoi(const char *str)
{
	unsigned int	idx;
	int				num;
	int				sign;

	idx = 0;
	num = 0;
	sign = 1;
	while ((str[idx] >= '\t' && str[idx] <= '\r') || str[idx] == ' ')
		idx++;
	if (str[idx] == '+' || str[idx] == '-')
	{
		if (str[idx] == '-')
			sign = -1;
		idx++;
	}
	while (str[idx] >= '0' && str[idx] <= '9')
	{
		num = num * 10 + str[idx] - '0';
		idx++;
	}
	return (num * sign);
}
