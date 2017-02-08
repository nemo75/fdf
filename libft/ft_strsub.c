/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 06:12:08 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/10 06:12:10 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (s == NULL)
		return (NULL);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	ft_strncpy(str, (char *)&s[start], len);
	str[len] = '\0';
	return (str);
}
