/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:24:31 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/16 17:24:32 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpushback(t_list **alst, t_list *new)
{
	while ((*alst)->next != NULL)
		(*alst) = (*alst)->next;
	(*alst)->next = new;
}
