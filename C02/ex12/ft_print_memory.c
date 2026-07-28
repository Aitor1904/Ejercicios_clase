/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olix <olix@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 13:54:36 by olix              #+#    #+#             */
/*   Updated: 2026/07/28 13:55:05 by olix             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(unsigned long long n, int digits)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (digits > 1)
		ft_print_hex(n / 16, digits - 1);
	write(1, &hex[n % 16], 1);
}

void	ft_print_line(unsigned char *ptr, unsigned int size, unsigned int i)
{
	unsigned int	j;

	ft_print_hex((unsigned long long)(ptr + i), 16);
	write(1, ": ", 2);
	j = 0;
	while (j < 16)
	{
		if (i + j < size)
			ft_print_hex(ptr[i + j], 2);
		else
			write(1, "  ", 2);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
	j = 0;
	while (j < 16 && i + j < size)
	{
		if (ptr[i + j] >= 32 && ptr[i + j] <= 126)
			write(1, &ptr[i + j], 1);
		else
			write(1, ".", 1);
		j++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (addr);
	i = 0;
	while (i < size)
	{
		ft_print_line((unsigned char *)addr, size, i);
		i += 16;
	}
	return (addr);
}
