/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 22:30:18 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/18 19:18:00 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*str;
	long	num;

	num = nbr;
	len = get_num_len(nbr);
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num != 0)
	{
		str[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
/* 
int	main(void)
{
	int		a;
	int		b;
	int		c;
	int		d;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	a = 42;
	b = -12345;
	c = 0;
	d = -2147483648;
	str1 = ft_itoa(a);
	str2 = ft_itoa(b);
	str3 = ft_itoa(c);
	str4 = ft_itoa(d);
	printf("exemplo1: %d -----> %s\n", a, str1);
	printf("exemplo2: %d -----> %s\n", b, str2);
	printf("exemplo3: %d -----> %s\n", c, str3);
	printf("exemplo4: %d -----> %s\n", d, str4);
}*/
