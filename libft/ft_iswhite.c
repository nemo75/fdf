/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:07:39 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/17 13:07:41 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iswhite(char *str, int len)
{
	if (str[len] == ' ' || str[len] == '\r' || str[len] == '\f'
		|| str[len] == '\n' || str[len] == '\t' || str[len] == '\v')
		return (1);
	return (0);
}
