/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 20:00:06 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/26 19:47:08 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*buffer1;

	buffer1 = s;
	a = 0;
	while (a < n)
	{
		buffer1[a] = (unsigned char)c;
		a++;
	}
	return (s);
}
/*
int	main(void)
{
	char str[] = "Escola 42";
	int a;
	int b;

	a = 'A';
	b = 6;
	ft_memset(str, a, b);
	printf("%s\n", str);
} */