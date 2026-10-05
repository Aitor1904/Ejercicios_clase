/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 10:35:50 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/05 12:07:11 by ailopez          ###   ########.fr       */
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

/*#include <stdio.h>
#include <string.h>

int	main (void)
{
	char	str1[] = "Hola 42";
	char	str2[] = "Hola 42";

	printf ("Test 1 (Cadenas iguales): Original = %d | ft_memcmp = %d\n", memcmp (str1, str2, 7), ft_memcmp(str1, str2, 7));

	char	str3[] = "Hola World";
	char	str4[] = "Hola World!";

	printf("Test 2 (Diferente longitud): Original = %d | ft_memcmp = %d\n", memcmp (str3, str4, 11), ft_memcmp(str3, str4, 11));
	return (0);
}*/
