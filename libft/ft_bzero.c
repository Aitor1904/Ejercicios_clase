/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:00:49 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/05 23:54:10 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hola Mundo 42";
	size_t	i;

	printf ("Frase a imprimir:  %s\n", str);
	ft_bzero (str, 5);
	printf ("Numeros ASCII: ");
	i = 0;
	while (i < sizeof(str))
	{
		printf("%d ", str[i]);
		i++;
	}
	printf ("\n");
	return (0);
}*/
