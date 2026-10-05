/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:13:54 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/06 00:42:00 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hola mundo 42!";
	size_t	len = sizeof(str);

	if (ft_memchr(str, '2', len) == memchr(str, '4', len))
		printf ("Test 1 ('4'): OK\n");
	else
		printf ("Test 1 ('4'): KO\n");
	if (ft_memchr(str, 'm', 4) == memchr(str, 'm', 4))
		printf ("Test 2 : OK\n");
	return (0);
}*/
