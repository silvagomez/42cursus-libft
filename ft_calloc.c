/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:35:39 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 13:49:09 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates the requested memory and returns a pointer to it.

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	t_size;
	char	*str;

	t_size = count * size;
	str = (char *)malloc(t_size);
	if (!str)
		return (NULL);
	return (ft_memset(str, 0, t_size));
}
