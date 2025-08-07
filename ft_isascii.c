/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:08:12 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/14 16:17:20 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
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
	e = 00;
	f = 127;
	g = 128;
	printf("%i is 8 so ft_isascii returns %d\n", c, ft_isascii(c));
	printf("%i is U so ft_isascii returns %d\n", d, ft_isascii(d));
	printf("%i is NUL so ft_isascii returns %d\n", e, ft_isascii(e));
	printf("%i is DEL so ft_isascii returns %d\n", f, ft_isascii(f));
	printf("%i is not ascii so ft_isascii returns %d\n", g, ft_isascii(g));
} */
