/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:28:29 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/16 18:23:19 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
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
	e = 65;
	f = 66;
	g = 127;
	printf("%i is 8 so ft_tolower returns %d\n", c, ft_tolower(c));
	printf("%i is U so ft_tolower returns %d\n", d, ft_tolower(d));
	printf("%i is A so ft_tolower returns %d\n", e, ft_tolower(e));
	printf("%i is B so ft_tolower returns %d\n", f, ft_tolower(f));
	printf("%i is DEL so ft_tolower returns %d\n", g, ft_tolower(g));
} */
