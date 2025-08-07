/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 22:39:59 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/16 18:22:39 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
/* 
int	main(void)
{
	int	c;
	int	d;
	int	e;
	int	f;
	int	g;

	c = 56;
	d = 85;
	e = 97;
	f = 121;
	g = 127;
	printf("%i is 8 so ft_toupper returns %d\n", c, ft_toupper(c));
	printf("%i is U so ft_toupper returns %d\n", d, ft_toupper(d));
	printf("%i is a so ft_toupper returns %d\n", e, ft_toupper(e));
	printf("%i is y so ft_toupper returns %d\n", f, ft_toupper(f));
	printf("%i is DEL so ft_toupper returns %d\n", g, ft_toupper(g));
} */
