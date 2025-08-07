/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 22:46:28 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/22 19:58:29 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int	main(void)
{
	int	number = 42;
	char	*str = "Escola 42";

	t_list	*node1 = ft_lstnew(&number);
	t_list	*node2 = ft_lstnew(str);
	node1->next = node2;

	printf("node1 content value: %d\n", *(int *)node1->content);
	printf("node2 node content value: %s\n", (char *)node2->content);
	printf("Address of next node pointed by node1 %p\n", (void *)node1->next);
	printf("Address of node2 %p\n", (void *)node2);
	printf("Content of the next node pointed by node1: %s\n",
		(char *)node1->next->content);
	if (node2->next == NULL)
		printf("Next node after node2: NULL\n");
	free(node1);
	free(node2);
} */
