/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:11:25 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/09 16:47:23 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	nb;

	nb = n;
	len = ft_strlenint(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n == 0)
		str[len] = '0';
	if (n < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	while (nb)
	{
		str[len] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
	return (str);
}
