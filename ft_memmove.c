/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 22:09:11 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/23 22:52:04 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destin;
	const char	*source;

	destin = dest;
	source = src;
	if (destin == source)
		return (dest);
	if (destin < source)
	{
		while (n--)
			*destin++ = *source++;
	}
	else
	{
		destin = destin + n;
		source = source + n;
		while (n--)
			*--destin = *--source;
	}
	return (dest);
}
/*
int	main(void)
{
	char	destin[] = "123456789";

	ft_memmove(destin, destin + 2, 5);
	printf("Destino: %s", destin);
	return (0);
} */
