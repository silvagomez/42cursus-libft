/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:57:23 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 12:50:30 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Concatenate up to n characters from the string pointed to, by src to dest.

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= len_dst)
		return (dstsize + ft_strlen(src));
	idx = 0;
	while (src[idx] != '\0' && (len_dst + idx) < (dstsize - 1))
	{
		dst[len_dst + idx] = src[idx];
		idx++;
	}
	dst[len_dst + idx] = '\0';
	return (len_dst + ft_strlen(src));
}
