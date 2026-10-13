/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:38:39 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/13 13:28:15 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				start;
	int				digits;
	unsigned int	nb;
	int				i;
	char			*result;

	nb = n;
	start = 0;
	if (nb < 0)
	{
		start = 1;
		nb *= -1;
	}
	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	result = malloc(i + start + 1);
	result[i + start] = '\0';
	if (!result)
		return (NULL);
	while (nb > 0)
	{
		nb = nb % 10 + '0';
		nb = nb / 10;
	}

	if (start == 1)
		result[0] = '-';
}
