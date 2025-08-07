/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:28:14 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/26 20:40:29 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	a;
	char			str[12];
	long			nb;

	a = 0;
	nb = n;
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	while (nb != 0)
	{
		str[a++] = nb % 10 + '0';
		nb /= 10;
	}
	while (a--)
		ft_putchar_fd(str[a], fd);
}
/*
int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-21, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147, 1);
	write(1, "\n", 1);
	return (0);
} */