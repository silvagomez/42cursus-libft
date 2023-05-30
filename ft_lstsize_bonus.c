/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:24:51 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 16:00:48 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Counts the number of nodes in a list.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	if (!lst)
		return (0);
	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
