/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:57:48 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 11:12:47 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Checks whether the passed character is an ASCII alphanumeric.

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}
