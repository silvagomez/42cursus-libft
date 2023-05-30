/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:27:32 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 16:13:16 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Deletes and frees the given node and every successor of that node, 
// using the function ’del’ and free(3).
// Finally, the pointer to the list must be set to NULL.

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
}
