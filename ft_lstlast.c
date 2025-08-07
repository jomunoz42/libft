/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 18:19:44 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/22 19:59:05 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
	char *str = "Escola 42";

	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));
	t_list *node4 = malloc(sizeof(t_list));
	t_list *node5 = malloc(sizeof(t_list));

	if(!node1 || !node2 || !node3 || !node4 || !node5)
	{
		return (1);
	}

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = NULL;

	node5->content = str;

	printf("Memory address of node 5: %p\n", (void *)node5);
	printf("Memory address of node 5: %p\n", (void *)ft_lstlast(node1));
	printf("Content of node 5: %s\n", (char *)ft_lstlast(node1)-> content);
	ft_lstclear(&node1, NULL);
}*/
