/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:43:28 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/20 12:09:07 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	if (!s1[start])
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (end > start && is_in_set(s1[end], set))
		end--;
	return (ft_substr(s1, start, (end - start) + 1));
}

/*#include <stdio.h>

int	main(void)
{
	char	*s1 = "   ... H1ola Mundo!...   ";
	char	*set = " .Ho";
	char	*result;
	result = ft_strtrim(s1, set);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}*/
