/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:35:33 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/16 15:35:35 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstcount(t_list *list)
{
	size_t i;

	i = 0;
	if (!list)
		return (i);
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}
