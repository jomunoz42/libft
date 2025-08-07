/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 23:00:48 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/16 18:34:30 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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

	c = 56;
	d = 85;
	e = 35;
	f = 123;
	printf("%i is 8 so ft_isalnum returns %d\n", c, ft_isalnum(c));
	printf("%i is U so ft_isalnum returns %d\n", d, ft_isalnum(d));
	printf("%i is # so ft_isalnum returns %d\n", e, ft_isalnum(e));
	printf("%i is { so ft_isalnum returns %d\n", f, ft_isalnum(f));
} */
