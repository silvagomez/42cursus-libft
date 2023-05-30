/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:28:50 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 12:57:53 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Searches for the first occurrence of the character c (an unsigned char) 
// in the string pointed to, by the argument str.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == (unsigned char)c)
			return ((char *)(s + idx));
		idx++;
	}
	if (s[idx] == (unsigned char)c)
		return ((char *)(s + idx));
	return (NULL);
}

// Arithmetic pointer
/*
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
*/
