/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:06:24 by jomunoz           #+#    #+#             */
/*   Updated: 2025/04/16 20:03:50 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*str;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	str = ft_calloc((len + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	a = 0;
	while (a < len)
	{
		str[a] = s[start + a];
		a++;
	}
	return (str);
}
/* 
int	main(void)
{
    printf("Exemplo normal:\n");
	printf("%s\n", ft_substr("Escola 42", 7, 2));
    printf("Substring no início:\n");
    printf("%s\n", ft_substr("Escola 42", 0, 2));
    printf("start fora da string:\n");
    printf("%s\n", ft_substr("Escola 42", 12, 2));
    printf("len excede o fim da string:\n");
    printf("%s\n", ft_substr("Escola 42", 7, 5));
    printf("len = 0:\n");
    printf("%s\n", ft_substr("Escola 42", 7, 0));
} */
