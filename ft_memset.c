/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:30:02 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 13:18:26 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies the character c (an unsigned char) to the first n characters 
// of the string pointed to, by the argument str.

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	idx;

	idx = 0;
	while (idx < len)
	{
		((unsigned char *)b)[idx] = c;
		idx++;
	}
	return (b);
}

// Arithmetic pointer
// (len--) is the same as (len > 0), len--;
/*
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (len--)
	{
		*str = (unsigned char)c;
		str++;
	}
	return (b);
}
*/
