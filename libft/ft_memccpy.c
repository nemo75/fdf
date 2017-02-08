/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 05:40:27 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/08 05:40:27 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*dst_cpy;
	char			*src_cpy;
	char			c_cpy;

	i = 0;
	dst_cpy = (void *)dst;
	src_cpy = (void *)src;
	c_cpy = (int)c;
	while (n > i && src_cpy[i] != c_cpy)
	{
		dst_cpy[i] = src_cpy[i];
		i++;
	}
	if (n == i)
		return (NULL);
	if (src_cpy[i] == c_cpy)
	{
		dst_cpy[i] = src_cpy[i];
		i++;
	}
	return ((void *)&dst_cpy[i]);
}
