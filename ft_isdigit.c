/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:53:31 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 11:15:18 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Checks whether the passed character is an ASCII decimal digit.

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
