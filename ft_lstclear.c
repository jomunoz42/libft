/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:41:41 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/22 19:59:56 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*temp;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		ft_lstdelone(temp, del);
	}
	*lst = NULL;
}
/*
void	free_content(void *content)
{
	free(content);
}

int	main(void)
{
	char *str = strdup("I am in node 1\n");
	char *str2 = strdup("I am in node 2\n");

	if (!str || !str2)
		return (1);

	t_list *node1 = ft_lstnew(str);
	t_list *node2 = ft_lstnew(str2);

	if (!node1 || !node2)
		return (1);

	node1->next = node2;
	node2->next = NULL;

	printf("%s", (char *)node1->content);
	printf("%s", (char *)node2->content);
	ft_lstclear(&node1, free_content);
	printf("Function applied, content freed, check vallgrind\n");

	return (0);
} */