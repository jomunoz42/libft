/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:08:09 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/23 21:26:00 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		a;
	const char	*s1;
	char		*s2;

	if (dest == src)
		return (dest);
	s2 = dest;
	s1 = src;
	a = 0;
	while (a < n)
	{
		((unsigned char *)s2)[a] = ((unsigned char *)s1)[a];
		a++;
	}
	return (dest);
}

/* int	main(void)
{
	char *source = "Escola 42";
	char *destino[20];

	ft_memcpy(destino, source, 10);
	printf("Destino: %s", destino);
	return (0);
} */