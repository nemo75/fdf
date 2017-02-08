/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 04:25:36 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/10 04:25:38 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tab;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	tab = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		tab[i] = (*f)(s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
