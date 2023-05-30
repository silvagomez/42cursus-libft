/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:37:42 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 13:04:09 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Searches for the last occurrence of the character c (an unsigned char) 
// in the string pointed to by the argument str.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	idx;

	idx = ft_strlen(s);
	while (idx >= 0)
	{
		if (s[idx] == (unsigned char)c)
			return ((char *)(s + idx));
		idx--;
	}
	return (NULL);
}

// Arithmetic pointer
/*
char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = NULL;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			str = (char *)s;
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (str);
}
*/
