/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:25:33 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 14:57:13 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the string ’s’ to the given file descriptor.

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	idx;

	if (!s)
		return ;
	idx = 0;
	while (s[idx] != '\0')
	{
		write(fd, &s[idx], 1);
		idx++;
	}
}
