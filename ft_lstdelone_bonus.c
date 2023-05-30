/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:27:03 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 16:09:47 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Takes as a parameter a node and frees the memory of the node’s content 
// using the function ’del’ given as a parameter and free the node.
// The memory of ’next’ must not be freed.

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
