/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 02:23:53 by thbricqu          #+#    #+#             */
/*   Updated: 2016/12/03 02:23:55 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "libft.h"
# define BUFF_SIZE 4

typedef struct				s_line
{
	char		*ligne;
	char		tmp[BUFF_SIZE + 1];
	int			ret;
}							t_line;

int							get_next_line(const int fd, char **line);

#endif
