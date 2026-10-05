/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 10:36:29 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/06 00:41:49 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hola 42 Malaga!";

	if (ft_strchr(str, '4') == strchr(str, '4'))
		printf("Test 1 ('4'):  OK\n");
	else
		printf("Test 1 ('4'):  KO\n");

	if (ft_strchr(str, 'z') == strchr(str, 'z'))
		printf("Test 2 ('z'):  OK\n");
	else
		printf("Test 2 ('z'):  KO\n");

	if (ft_strchr(str, '\0') == strchr(str, '\0'))
		printf("Test 3 ('\\0'): OK\n");
	else
		printf("Test 3 ('\\0'): KO\n");

	if (ft_strchr(str, 1024) == strchr(str, 1024))
		printf("Test 4 (1024): OK\n");
	else
		printf("Test 4 (1024): KO\n");

	return (0);
}
