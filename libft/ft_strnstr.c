/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 10:49:51 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/06 00:30:39 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle[j] && (i + j) < len)
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	haystack[] = "Hola 42 Malaga!";

	printf("Buscar '42' (len 10): %s\n", ft_strnstr(haystack, "42", 10));
	printf("Buscar 'Malaga' (len 8): %s\n", ft_strnstr(haystack, "Malaga", 8));
	printf("Buscar '' (needle vacia): %s\n", ft_strnstr(haystack, "", 5));
	return (0);
}
