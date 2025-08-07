/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 21:18:14 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/16 21:36:10 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int		a;
	const unsigned char	*str;

	str = s;
	a = 0;
	while (a < n)
	{
		if (str[a] == (unsigned char)c)
			return ((void *)&str[a]);
		a++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char str[] = "Hello, World!";
	char *result;

	// 1: Byte exists in memory block
	result = (char *)ft_memchr(str, 'o', 12);

	if (result != NULL)
		printf("Found 'o' at position: %i\n", result - str);
	else
		printf("'o' not found\n");

	// 2: Byte does not exist in memory block
	result = (char *)ft_memchr(str, 'z', 12);
	if (result == NULL)
		printf("'z' not found\n");

	// 3: Null terminator ('\0')
	result = (char *)ft_memchr(str, '\0', strlen(str) + 1);

	if (result != NULL)
		printf("Found null terminator at position: %i\n", result - str);

	return (0);
}*/
