/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 18:05:15 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/22 19:58:57 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	a;

	a = 0;
	while (lst)
	{
		a++;
		lst = lst->next;
	}
	return (a);
}
/*
int	main(void)
{
	t_list	*node1 = malloc(sizeof(t_list));
	t_list	*node2 = malloc(sizeof(t_list));
	t_list	*node3 = malloc(sizeof(t_list));
	t_list	*node4 = malloc(sizeof(t_list));

	if(!node1 || !node2 || !node3 || !node4)
	{
		return (1);
	}
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;

	printf("%d", ft_lstsize(node1));
	ft_lstclear(&node1, NULL);
	return (0);
}*/
