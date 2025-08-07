/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:12:27 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/26 19:54:21 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	a;

	if (!s)
		return ;
	a = 0;
	while (s[a] != '\0')
	{
		ft_putchar_fd(s[a], fd);
		a++;
	}
}
/* 
int	main(void)
{
	char	*s;
	int		fd;

	s = "Escola 42";
	fd = 1;
	ft_putstr_fd(s, fd);
	return (0);
} */