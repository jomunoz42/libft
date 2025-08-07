/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 23:13:53 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/26 23:16:59 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
static char	uppercase_even(unsigned int a, char c)
{
	if (a % 2 == 0 && (c >= 'a' && c <= 'z'))
		return (c - 32);
	return (c);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		a;
	char	*str;

	if (!s || !f)
		return (NULL);
	str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	a = 0;
	while (s[a])
	{
		str[a] = f(a, s[a]);
		a++;
	}
	str[a] = '\0';
	return (str);
}
/* 
int	main(void)
{
	const char *str1 = "aaaaaaaaaaa";
	char *result = ft_strmapi(str1, uppercase_even);

	printf("%s", result);
	free(result);
	return (0);
} */