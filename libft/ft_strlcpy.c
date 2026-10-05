/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 13:22:53 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/06 00:22:41 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "Hola Mundo 42 !";
	char	dst[20];
	size_t	ret;

	ret = ft_strlcpy(dst, src, 8);
	printf("Copiado en dst: '%s'\n", dst);
	return (0);
}
