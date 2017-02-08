/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 06:14:19 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/08 06:14:21 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;

	i = 0;
	s1_cpy = (void *)s1;
	s2_cpy = (void *)s2;
	if (n == 0)
		return (0);
	while ((*s1_cpy != '\0' || *s2_cpy != '\0') && ((n - 1) > i))
	{
		if (s1_cpy[i] != s2_cpy[i])
			return (s1_cpy[i] - s2_cpy[i]);
		i++;
	}
	return (s1_cpy[i] - s2_cpy[i]);
}
