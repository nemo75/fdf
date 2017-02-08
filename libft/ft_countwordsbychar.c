/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwordsbychar.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:02:06 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/14 09:02:07 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwordsbychar(char const *s, char c)
{
	int	words;
	int	i;
	int	test;

	i = 0;
	test = 0;
	words = 0;
	while (s[i])
	{
		if (test == 1 && s[i] == c)
			test = 0;
		if (test == 0 && (s[i] != c && s[i]))
		{
			test = 1;
			words++;
		}
		i++;
	}
	return (words);
}
