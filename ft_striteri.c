/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:25:55 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/26 23:16:25 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
static void	uppercase_even(unsigned int a, char *c)
{
	if (a % 2 == 0 && (*c >= 'a' && *c <= 'z'))
		*c = *c - 32;
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	a;

	if (!s || !f)
		return ;
	a = 0;
	while (s[a])
	{
		(*f)(a, &s[a]);
		a++;
	}
}
/* 
int	main(void)
{
	char	str[] = "aaaaaaaaaaa";

	ft_striteri(str, uppercase_even);
	printf("%s\n", str);
	return (0);
} */
