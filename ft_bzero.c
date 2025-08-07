/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 21:33:12 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/29 20:55:34 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/* 
int	main(void)
{
	char	str[] = "Escola 42";
	int		a;
	int		b;

	a = 6;
	b = 0;
	ft_bzero(str, a);
	while (str[b] != '2')
	{
		printf("%d\n", str[b]);
		b++;
	}
} */
