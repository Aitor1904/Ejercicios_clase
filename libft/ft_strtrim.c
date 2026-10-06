/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:43:28 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/06 13:26:23 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*sub;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	sub = (char *)malloc(ft_strlen(s1) + 1);
	if (!sub)
		return (NULL);
	while (s1[i])
	{
		
		i++;
	}
}
