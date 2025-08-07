/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 23:32:38 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/22 19:59:18 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	void_toupper(void *content)
{
	char	*str;

	str = (char *)content;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew(strdup("I am in node 1"));
	node2 = ft_lstnew(strdup("I am in node 2"));
	node3 = ft_lstnew(strdup("I am in node 3"));

	if(!node1 || !node2 || !node3)
	{
		return (1);
	}

	node1->next = node2;
	node1->next->next = node3;
	node1->next->next->next = NULL;

	printf("node1 content: %s\n", (char *)node1->content);
	printf("node2 content: %s\n", (char *)node2->content);
	printf("node3 content: %s\n", (char *)node3->content);

	ft_lstiter(node1, void_toupper);

	printf("\n");
	printf("Contents of nodes printed by order after function is applied:\n");
	printf("\n");

	printf("Node1 content: %s\n", (char *)node1->content);
	printf("Node2 content: %s\n", (char *)node2->content);
	printf("Node3 content: %s\n", (char *)node3->content);

	ft_lstclear(&node1, free);
	return (0);
} */
