/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olix <olix@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 21:46:53 by olix              #+#    #+#             */
/*   Updated: 2026/09/30 22:10:22 by olix             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;
	size_t				i;

	p_dst = (unsigned char *)dst;
	p_src = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (0 < n)
		{
			p_dst[n -1] = p_src[n -1];
			n--;
		}
	}
	else
	{
		i = 0
		while (i < n)
		{
			p_dst[i] = p_src[i];
			i++;
		}
	}
	return (dst);
}
