
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    :+:      :+:    :+:   */
/*   By: student <student@42.fr>                     +:+  +:+       +:+        */
/*                                                #+#+# Kramer +#+#           */
/*   Created: 2026/09/21 20:31:00 by student           #+#    #+#             */
/*   Updated: 2026/09/21 20:31:00 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = malloc(sizeof(int) * size);
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
