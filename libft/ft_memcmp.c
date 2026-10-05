/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 10:35:50 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/06 00:15:05 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;
	size_t				i;

	ptr_s1 = (const unsigned char *)s1;
	ptr_s2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main (void)
{
	char	str1[] = "Hola 42";
	char	str2[] = "H0la 42";
	char	str3[] = "Hola World";
	char	str4[] = "Hola World!";

	if (ft_memcmp(str1, str2, 7) == memcmp(str1, str2, 7))
		printf ("Test 1 (Iguales):    OK\n");
	else
		printf ("Test 1 (Iguales):    KO\n");
	if (ft_memcmp(str3, str4, 11) == memcmp(str3, str4, 11))
		printf ("Test 2 (Diferentes): OK\n");
	else
		printf ("Test 2 (Diferentes): KO\n");
	if (ft_memcmp(str3, str4, 0) == memcmp(str3, str4, 0))
		printf ("Test 3 (n = 0):      OK\n");
	else
		printf ("Test 3 (n = 0):      KO\n");
	return (0);
}
