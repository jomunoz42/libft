/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:18:44 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/26 20:46:36 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void	*escola_42(void *content)
{
	(void)content;
	return (strdup("Escola 42"));
}

int	main(void)
{
	t_list *node1 = ft_lstnew(strdup("I am in node 1"));
	t_list *node2 = ft_lstnew(strdup("I am in node 2"));
	t_list *new_list;

	if (!node1 || !node2)
		return (1);

	node1->next = node2;

	new_list = ft_lstmap(node1, escola_42, free);


	printf("Original list contents:\n %s\n %s\n", (char *)node1->content,
		(char *)node2->content);
	printf("new_list list contents:\n %s\n %s\n", (char *)new_list->content,
		(char *)new_list->next->content);

	ft_lstclear(&node1, free);
	ft_lstclear(&new_list, free);
	return (0);
}*/
