/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:25:56 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 14:44:26 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the string ’s’ to the given file descriptor followed by a newline.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	write(fd, "\n", 1);
}
