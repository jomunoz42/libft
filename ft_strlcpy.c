/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:44:53 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/26 19:51:09 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			a;
	size_t			src_len;
	const char		*buffer1;
	char			*buffer2;

	buffer2 = dst;
	buffer1 = src;
	src_len = 0;
	a = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size == 0)
		return (src_len);
	while (a < size - 1 && src[a] != '\0')
	{
		buffer2[a] = buffer1[a];
		a++;
	}
	buffer2[a] = '\0';
	return (src_len);
}
/* 
int	main(void)
{
	char	*source = "Escola 42";
	char	destino[7];
	int		result;

	result = ft_strlcpy(destino, source, 7);
	ft_strlcpy(destino, source, 7);
	printf("Dst: %s\n", destino);
	printf("src size: %d\n", result);
	return (0);
} */
