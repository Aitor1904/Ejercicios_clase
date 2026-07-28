/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olix <olix@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 13:53:30 by olix              #+#    #+#             */
/*   Updated: 2026/07/28 13:53:34 by olix             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha_num(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (ft_str_is_alpha_num(str[i]))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!new_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			new_word = 0;
		}
		else
		{
			new_word = 1;
		}
		i++;
	}
	return (str);
}
