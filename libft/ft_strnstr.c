/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 06:19:21 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/08 06:19:22 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			c;

	i = 0;
	c = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	if (ft_strlen(s2) > ft_strlen(s1))
		return (NULL);
	else
	{
		while (s1[i])
		{
			while (s2[c] && s1[i + c] == s2[c] && i + c < n)
				c++;
			if (s2[c] == '\0')
				return ((char *)&s1[i]);
			i++;
			c = 0;
		}
		return (NULL);
	}
}
