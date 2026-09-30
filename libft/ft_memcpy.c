/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olix <olix@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 21:27:52 by olix              #+#    #+#             */
/*   Updated: 2026/09/30 21:45:51 by olix             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;
	size_t				i;

	p_dst = (unsigned char *)dst;
	p_src = (const unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (dst);
}
