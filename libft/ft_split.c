/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 23:20:34 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/07 15:27:37 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**free_matrix(char **lst, size_t j)
{
	size_t	k;

	k = 0;
	while (k < j)
		free(lst[k++]);
	free(lst);
	return (NULL);
}

static char	*get_word(char const *s, size_t start, char c)
{
	size_t	len;

	len = 0;
	while (s[start + len] && s[start + len] != c)
		len++;
	return (ft_strndup(s + start, len));
}

static char	*strndup(const char *s, size_t n)
{
	char	*dup;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	len = 0;
	while (s[len] && len < n)
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	lst = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!lst)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			lst[j] = get_word(s, i, c);
			if (!lst[j])
				return (free_matrix(lst, j));
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	lst[j] = NULL;
	return (lst);
}
