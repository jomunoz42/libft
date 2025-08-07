/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:06:48 by jomunoz           #+#    #+#             */
/*   Updated: 2025/05/21 19:34:01 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size && nmemb >= ((size_t) - 1) / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL); 
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
int	main(void)
{
	int	*str;
	int	n;
	int	a;

	n = 7;
	a = 0;
	str = ft_calloc(n, sizeof(int));
	if (str == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	printf("After ft_calloc:\n");
	while (a < n)
	{
		printf("%d", str[a]);
		a++;
	}
	a = 0;
	printf("\n");
	while (a < n)
	{
		str[a] = a + 1;
		a++;
	}
	a = 0;
	while (a < n)
	{
		printf("%d", str[a]);
		a++;
	}
	printf("\n");
	free(str);
	return (0);
} */
