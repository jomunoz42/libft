/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 22:04:19 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/16 18:43:39 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	a;
	int	num;
	int	sign;

	a = 0;
	num = 0;
	sign = 1;
	while (nptr[a] == ' ' || (nptr[a] >= 9 && nptr[a] <= 13))
		a++;
	if (nptr[a] == 45 || nptr[a] == 43)
	{
		if (nptr[a] == 45)
			sign = -sign;
		a++;
	}
	while (nptr[a] >= '0' && nptr[a] <= '9')
	{
		num = num * 10 + (nptr[a] - '0');
		a++;
	}
	return (num * sign);
}
/* 
int	main(void)
{
	char	nptr[] = "   -1234ab567";

	printf("%d\n", atoi(nptr));
	printf("%d\n", ft_atoi(nptr));
} */
