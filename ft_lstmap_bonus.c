/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:28:04 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 16:18:48 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Iterates the list ’lst’ and applies the function ’f’ on the content 
// of each node. 
// Creates a new list resulting of the successive applications of 
// the function ’f’. 
// The ’del’ function is used to delete the content of a node if needed. 

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*element;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		tmp = f(lst->content);
		element = ft_lstnew(tmp);
		if (!element)
		{
			free(tmp);
			ft_lstclear(&element, del);
		}
		ft_lstadd_back(&new_lst, element);
		lst = lst->next;
	}
	return (new_lst);
}
