/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 18:35:04 by jomunoz           #+#    #+#             */
/*   Updated: 2025/05/03 12:13:52 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	cpy_len;
	size_t	buffer;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (dest_len >= size)
		return (size + src_len);
	buffer = (size - dest_len - 1);
	cpy_len = 0;
	while (src[cpy_len] && cpy_len < buffer)
	{
		dst[dest_len + cpy_len] = src[cpy_len];
		cpy_len++;
	}
	dst[dest_len + cpy_len] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char    str1[20];
	char    str2[10];
	size_t    n;

	str1[20] = "Abra";
	str1[10] = "cadabra";
	n = 7;
	ft_strlcat(str1, str2, n);
	printf("%s", str1);
}*/
