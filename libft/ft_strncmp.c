/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 12:32:54 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/06 10:21:16 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "Hola Mundo";
	char	s2[] = "Hola Word";

	printf("Comparar primeros 4 caracteres ('Hola' vs 'Hola'): %d\n",
		ft_strncmp(s1, s2, 4));
	printf("Comparar primeros 7 caracteres ('Hola 42' vs 'Hola 43'): %d\n",
		ft_strncmp(s1, s2, 7));
	printf("Comparar con n = 0: %d\n",
		ft_strncmp(s1, s2, 0));
	return (0);
}*/
