/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:38:39 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/13 21:21:37 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_letter(unsigned int nb)
{
	int				i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

void	fill_str(char *result, unsigned int nb, int j, int start)
{
	while (j >= start)
	{
		result[j] = (nb % 10) + '0';
		nb = nb / 10;
		j--;
	}
	if (start == 1)
		result[0] = '-';
}

char	*ft_itoa(int n)
{
	int				start;
	char			*result;
	unsigned int	nb;
	int				i;
	int				j;

	nb = n;
	start = 0;
	if (n < 0)
	{
		start = 1;
		nb *= -1;
	}
	i = count_letter(nb);
	result = malloc(i + start + 1);
	if (!result)
		return (NULL);
	result[i + start] = '\0';
	j = i + start - 1;
	fill_str(result, nb, j, start);
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	char	*result;

	result = ft_itoa(42);
	printf("Resultado: %s\n", result);
	free(result);
	result = ft_itoa(-123);
	printf("Resultado: %s\n", result);
	free(result);
	result = ft_itoa(0);
	printf("Resultado: %s\n", result);
	free(result);
	return (0);
}*/
