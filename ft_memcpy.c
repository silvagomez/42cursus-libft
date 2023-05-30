/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:44:07 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 13:18:17 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies n characters from src to dest.

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	idx;

	if (!dst && !src)
		return (0);
	idx = 0;
	while (idx < n)
	{
		((unsigned char *)dst)[idx] = ((unsigned char *)src)[idx];
		idx++;
	}
	return (dst);
}

// Arithmetic pointer
// (n--) is the same as (n > 0), n--;
/*
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*orig_dst;

	if (!dst && !src)
		return (NULL);
	orig_dst = dst;
	while (n--)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		dst++;
		src++;
	}
	return (orig_dst);
}
*/
