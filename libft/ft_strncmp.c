/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 07:30:14 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/04 07:30:15 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 || *s2) && (i < n))
	{
		if (*s1 != *s2)
			return (((unsigned char)*s1) - ((unsigned char)*s2));
		i++;
		s1++;
		s2++;
	}
	return (0);
}
