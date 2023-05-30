/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:06:39 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 13:58:32 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum size ’len’.

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	new_len;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start || ft_strlen(s) == 0 || len == 0)
		return (ft_strdup(""));
	new_len = 0;
	if (ft_strlen(s) - start > len)
		new_len = len + 1;
	else
		new_len = ft_strlen(s) - start + 1;
	sub = ft_calloc(new_len, sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, new_len);
	return (sub);
}
