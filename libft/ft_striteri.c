/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 23:30:58 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/13 23:53:06 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

void	ft_upper_case(unsigned int i, char *c)
{
	(void)i;

	if (*c >= 'a' && *c <= 'z')
	{
		*c = *c - 32;
	}
}

int	main(void)
{
	char	s[] = "";

	printf("Antes: %s\n", s);
	ft_striteri(s, &ft_upper_case);
	printf("Despues: %s\n", s);
	return (0);
}*/
