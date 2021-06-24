/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:24:48 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/24 17:37:32 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*nlist;

	head = NULL;
	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		nlist = ft_lstnew(f(lst -> content));
		if (nlist == NULL)
			ft_lstclear(&head, del);
		else
			ft_lstadd_back(&head, nlist);
		lst = lst -> next;
	}
	return (head);
}
