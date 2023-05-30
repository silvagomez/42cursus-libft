/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:23:45 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 14:41:34 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function ’f’ on each character of the string passed as argument, 
// passing its index as first argument. Each character is passed by address 
// to ’f’ to be modified if necessary.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	idx;

	if (!s || !f)
		return ;
	idx = 0;
	while (s[idx] != '\0')
	{
		(*f)(idx, s + idx);
		idx++;
	}
}
