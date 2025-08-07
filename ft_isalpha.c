/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 22:45:07 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/16 18:31:42 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
	printf("%i is 8 so ft_isalpha returns %d\n", c, ft_isalpha(c));
	printf("%i is U so ft_isalpha returns %d\n", d, ft_isalpha(d));
} */
