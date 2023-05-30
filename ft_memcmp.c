/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 08:47:50 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 13:32:51 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compares the first n bytes of s1 and s2.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			idx;

	idx = 0;
	while (idx < n)
	{
		if (((unsigned char *)s1)[idx] != ((unsigned char *)s2)[idx])
			return (((unsigned char *)s1)[idx] - ((unsigned char *)s2)[idx]);
		idx++;
	}
	return (0);
}

// Arithmetic pointer
// Important n - 1 > 0 because these case:
// ft_memcmp("abcdefghij", "abcdefgxyz", 7);
/*
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str_s1;
	unsigned char	*str_s2;

	if (n == 0)
		return (0);
	str_s1 = (unsigned char *)s1;
	str_s2 = (unsigned char *)s2;
	while (*str_s1 == *str_s2 && n - 1 > 0)
	{
		str_s1++;
		str_s2++;
		n--;
	}
	return (*str_s1 - *str_s2);
}
*/
