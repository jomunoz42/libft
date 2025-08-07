/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:34:58 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/23 21:00:50 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new_node;
	t_list	*tmp;

	node1 = ft_lstnew("I am in node 1");
	node2 = ft_lstnew("I am in node 2");
	node3 = ft_lstnew("I am in node 3");
	new_node = ft_lstnew("I am in new_node");

	if(!node1 || !node2 || !node3 || !new_node)
	{
		return (1);
	}

	node1->next = node2;
	node1->next->next = node3;
	node1->next->next->next = NULL;

	printf("node1 content: %s\n", (char *)node1->content);
	printf("node2 content: %s\n", (char *)node2->content);
	printf("node3 content: %s\n", (char *)node3->content);

	ft_lstadd_back(&node1, new_node);

	printf("\n");
	printf("Contents of nodes printed by order after function is applied:\n");
	printf("\n");

	tmp = node1;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear(&node1, NULL);
	return (0);
}*/
