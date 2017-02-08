/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 09:39:06 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/04 09:39:07 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t n)
{
	size_t	i;
	size_t	c;
	size_t	b;

	b = 0;
	i = 0;
	c = 0;
	while (dest[i])
		i++;
	while (src[b])
		b++;
	if (n > b)
		n = b;
	while (c <= b && c < n)
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	return (char *)(&dest[0]);
}
