/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 08:59:20 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/16 08:59:22 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (new_list == NULL || lst == NULL)
		return (NULL);
	new_list = (*f)(lst);
	new_list->next = ft_lstmap(lst->next, f);
	return (new_list);
}
