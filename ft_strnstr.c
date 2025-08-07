/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:55:45 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/22 20:01:13 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[a] != '\0' && a < len)
	{
		b = 0;
		while (big[a + b] == little[b] && (a + b) < len)
		{
			if (little[b + 1] == '\0')
			{
				return ((char *)&big[a]);
			}
			b++;
		}
		a++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char	big1[50] = "VAMOS AO EXAME";
	char	big2[] = "AO";

	printf("%s", ft_strnstr(big1, big2, 8));
}*/