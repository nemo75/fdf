/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 08:38:41 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/04 08:38:42 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int c;
	int b;

	b = 0;
	i = 0;
	c = 0;
	while (dest[i])
		i++;
	while (src[b])
		b++;
	while (c < b)
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	return (char *)(&dest[0]);
}
