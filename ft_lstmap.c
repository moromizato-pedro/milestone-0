/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrohe3 <pedrohe3@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:32:52 by pedrohe3          #+#    #+#             */
/*   Updated: 2025/11/05 15:20:25 by pedrohe3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*copy;
	t_list	*node;

	if (!lst)
		return (NULL);
	copy = NULL;
	while (lst)
	{
		if (f)
			node = ft_lstnew(f(lst->content));
		else
			node = ft_lstnew(lst->content);
		if (!node)
		{
			ft_lstclear(&copy, del);
			return (NULL);
		}
		ft_lstadd_back(&copy, node);
		lst = lst->next;
	}
	return (copy);
}
