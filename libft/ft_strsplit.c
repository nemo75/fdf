/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 10:04:42 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/11 10:21:14 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(const char *s, char c)
{
	char	**str;
	int		words;
	int		i;
	int		len;
	char	**tmp;

	if (!s)
		return (NULL);
	i = 0;
	words = ft_countwordsbychar(s, c);
	if ((str = (char **)malloc(sizeof(*str) * (words + 1))) == NULL)
		return (NULL);
	tmp = str;
	while (s[i] != '\0')
	{
		(s[i] == c) ? i++ : 0;
		if (s[i] != c && s[i])
		{
			len = ft_countletters(s, i, c);
			*str++ = ft_strsub(s, i, len);
			i = i + len;
		}
	}
	*str = 0;
	return (tmp);
}
