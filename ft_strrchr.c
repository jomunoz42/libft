/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:45:25 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/26 21:01:28 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		length;

	length = 0;
	while (s[length] != '\0')
		length++;
	while (length >= 0)
	{
		if (s[length] == (char)c)
			return ((char *)&s[length]);
		length--;
	}
	return (NULL);
}
/* 
int main(void)
{
	const char  str[] = "Abracadabra 42";
	int a;
	int b;

	a = 97;
	b = '\0';
	printf("%s\n", ft_strrchr(str, a));
	printf("%s\n", ft_strrchr(str, b));
} */