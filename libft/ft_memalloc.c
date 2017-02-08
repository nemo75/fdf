/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:29:53 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/09 17:29:54 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *tab;

	tab = (void *)malloc(sizeof(size_t) * size);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, size);
	return (tab);
}
