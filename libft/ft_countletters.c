/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countletters.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:20:29 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/16 15:20:30 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countletters(char const *s, int i, int c)
{
	int count;

	count = 0;
	while (s[i] != c && s[i])
	{
		count++;
		i++;
	}
	return (count);
}
