/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:40:04 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/14 16:17:13 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	char	e;
	char	f;

	c = 56;
	d = 126;
	e = 9;
	f = 127;
	printf("%i is 8 so ft_isprint returns %d\n", c, ft_isprint(c));
	printf("%i is ~ so ft_isprint returns %d\n", d, ft_isprint(d));
	printf("%i is horizontal tab so ft_isprint returns %d\n", e, ft_isprint(e));
	printf("%i is delete so ft_isprint returns %d\n", f, ft_isprint(f));
} */
