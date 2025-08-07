/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:40:03 by jomunoz           #+#    #+#             */
/*   Updated: 2025/05/21 19:47:20 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/* 
void	free_content(void *content)
{
	free(content);
}

int	main(void)
{
	char *str = strdup("I am in node 1\n");

	if (!str)
		return (1);

	t_list *node1 = ft_lstnew(str);

	if (!node1)
	{
		free(str);
		return (1);
	}
	printf("%s", (char *)node1->content);
	ft_lstdelone(node1, free_content);
	printf("Function applied, content freed, check valgrind\n");

	return (0);
}*/
