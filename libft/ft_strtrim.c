/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 08:12:20 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/10 08:12:21 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	char		*new_str;
	size_t		i;
	size_t		len;

	i = 0;
	len = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] && (str[i] == 32 || str[i] == 10 ||
		str[i] == 44 || str[i] == 9))
		i++;
	len = ft_strlen(str + i) - 1;
	while (str[i] && (str[len + i] == 32 || str[len + i] == 10 ||
		str[len + i] == 44 || str[len + i] == 9))
		len--;
	new_str = ft_strnew(len + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strncpy(new_str, (char *)str + i, len + 1);
	return (new_str);
}
