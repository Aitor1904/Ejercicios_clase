/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:42:45 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/14 14:54:42 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	num;

	nb = n;
	if (n < 0)
	{
		write (fd, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	num = (nb % 10) + '0';
	write (fd, &num, 1);
}
