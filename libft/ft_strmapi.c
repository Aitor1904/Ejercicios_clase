/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:22:25 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/13 23:56:18 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	if (!s)
		return (NULL);
	res = malloc(ft_strlen (s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

#include <stdio.h>

char	ft_to_upper_index(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

int	main(void)
{
	char	*s_original = "hola mundo 42";
	char	*s_resultado;

	s_resultado = ft_strmapi(s_original, &ft_to_upper_index);
	if (!s_resultado)
		return (1);
	printf("Original:  %s\n", s_original);
	printf("Modificada: %s\n", s_resultado);
	free(s_resultado);
	return (0);
}
