/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 03:14:41 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/10 03:14:42 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *tab;

	tab = (char *)malloc(sizeof(char) * size + 1);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, size + 1);
	return (tab);
}
