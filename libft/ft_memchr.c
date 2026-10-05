/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:13:54 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/05 12:12:30 by ailopez          ###   ########.fr       */
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

	printf("Test 1 ('4'): Original = %p | ft_memchr = %p\n",
		memchr(str, '4', 15), ft_memchr(str, '4', 15));

	printf("Test 2 ('M' con n=5): Original = %p | ft_memchr = %p\n",
		memchr(str, 'M', 5), ft_memchr(str, 'M', 5));

	printf("Test 3 ('\\0'): Original = %p | ft_memchr = %p\n",
		memchr(str, '\0', 15), ft_memchr(str, '\0', 15));

	printf("Test 4 (c = 1024 / 'a'): Original = %p | ft_memchr = %p\n",
		memchr(str, 1024, 15), ft_memchr(str, 1024, 15));

	return (0);
}*/
