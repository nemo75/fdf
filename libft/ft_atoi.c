/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 07:08:43 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/04 07:08:45 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int result;
	int len;
	int negative;

	result = 0;
	len = 0;
	negative = 0;
	if (*str == '\0')
		return (0);
	while (ft_iswhite(str, len) == 1)
		len++;
	if (str[len] == '-')
		negative = 1;
	if (str[len] == '-' || str[len] == '+')
		len++;
	while ((str[len] >= '0') && (str[len] <= '9') && (str[len] != '\0'))
	{
		result = result * 10 + (str[len] - '0');
		len++;
	}
	if (negative == 1)
		result = result * -1;
	return (result);
}
