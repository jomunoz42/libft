/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 22:56:13 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/14 16:17:18 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
/* 
int	main(void)
{
	char	c;
	char	d;

	c = 56;
	d = 85;
	printf("%i is 8 so ft_isdigit returns %d\n", c, ft_isdigit(c));
	printf("%i is U so ft_isdigit returns %d\n", d, ft_isdigit(d));
} */
