/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:03:14 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/14 17:11:10 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				a;
	const unsigned char	*ptr1 = (const unsigned char *)s1;
	const unsigned char	*ptr2 = (const unsigned char *)s2;

	a = 0;
	while (a < n)
	{
		if (ptr1[a] != ptr2[a])
		{
			return (ptr1[a] - ptr2[a]);
		}
		a++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "abcABC";
	char	str2[] = "abcAAA";
	unsigned int	n = 4;

	printf("%d", ft_memcmp(str1, str2, n));
}*/
