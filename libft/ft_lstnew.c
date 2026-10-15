/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:40:39 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/15 12:32:34 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_cotent;

	n_cotent = malloc(sizeof(t_list));
	if (!n_cotent)
		return (NULL);
	n_cotent ->content = content;
	n_cotent ->next = NULL;
	return (n_cotent);
}
