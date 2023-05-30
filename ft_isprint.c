/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:11:11 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 13:59:24 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Checks whether the passed character is an ASCII printable.

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
