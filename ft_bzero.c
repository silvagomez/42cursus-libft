/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:19:46 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 11:32:12 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The bzero function places nbyte null bytes in the string s.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
