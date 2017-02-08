/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 23:42:16 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/05 23:42:20 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len_dst;

	len_dst = 0;
	while (dst[len_dst] && len_dst < size)
		len_dst++;
	i = len_dst;
	while (src[len_dst - i] && len_dst + 1 < size)
	{
		dst[len_dst] = src[len_dst - i];
		len_dst++;
	}
	if (len_dst < size)
		dst[len_dst] = '\0';
	return (i + ft_strlen(src));
}
