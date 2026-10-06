/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 10:44:17 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/06 10:21:05 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hola 42 Malaga 42";

	printf("Ultima '4': %s\n", ft_strrchr(str, '4'));
	printf("Buscar '\\0': %s\n", ft_strrchr(str, '\0'));
	printf("Buscar 'z':  %s\n", ft_strrchr(str, 'z'));

	return (0);
}*/
