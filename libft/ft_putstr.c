/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 07:07:26 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/04 07:07:27 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	unsigned int i;

	i = 0;
	if (str != NULL)
	{
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}
