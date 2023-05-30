/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:20:51 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 14:28:37 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a string representing the 
// integer received as an argument.
// Negative numbers must be handled.

#include "libft.h"

static size_t	ft_numlen(int num)
{
	int	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		n_len;
	long	num;
	char	*str;

	n_len = ft_numlen(n);
	num = n;
	str = (char *)ft_calloc(n_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	str[n_len--] = '\0';
	while (num != 0)
	{
		str[n_len] = num % 10 + '0';
		n_len--;
		num = num / 10;
	}
	return (str);
}
