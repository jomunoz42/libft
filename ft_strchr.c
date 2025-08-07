/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:11:08 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/26 19:52:05 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	unc;
	size_t			a;

	unc = (unsigned char)c;
	a = 0;
	while (s[a] != '\0')
	{
		if ((unsigned char)s[a] == unc)
			return ((char *)&s[a]);
		a++;
	}
	if (unc == '\0')
		return ((char *)&s[a]);
	return (NULL);
}
/*
int	main(void)
{
	const char  str[] = "Escola 42";
	int a;
	int b;

	a = 97;
	b = '\0';
	printf("%s\n", ft_strchr(str, a));
	printf("%s\n", ft_strchr(str, b));
} */