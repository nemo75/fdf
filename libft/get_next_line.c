/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 13:22:26 by thbricqu          #+#    #+#             */
/*   Updated: 2017/01/24 13:22:30 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	char	*ft_strpchr(const char *s, int c)
{
	while (*s && *s != c)
		s++;
	if (*s == c)
		s++;
	return (char *)s;
}

static	char	*ft_realloc(char *s1, char *s2)
{
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (str == NULL)
		return (NULL);
	str = ft_strcat(str, s1);
	str = ft_strcat(str, s2);
	free(s1);
	if (str)
		return (str);
	return (NULL);
}

static	int		ft_split(t_line *all, char **line)
{
	char *str;

	str = ft_strdup(ft_strpchr(all->ligne, '\n'));
	if (str == NULL)
		return (-1);
	*line = ft_strsub(all->ligne, 0,
	(ft_strchr(all->ligne, '\n') - &all->ligne[0]));
	if (*line == NULL)
		return (-1);
	free(all->ligne);
	all->ligne = str;
	return (1);
}

static int		ft_get_last_line(t_line *all, char **line)
{
	*line = all->ligne;
	all->ligne = NULL;
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static t_line *all[10240];

	if (fd < 0 || !line || BUFF_SIZE <= 0 || fd > 10240)
		return (-1);
	if (all[fd] == NULL)
	{
		all[fd] = (t_line*)malloc(sizeof(t_line));
		all[fd]->ligne = ft_strnew(BUFF_SIZE);
	}
	if (all[fd]->ligne != NULL && (ft_strchr(all[fd]->ligne, '\n') != NULL))
		return (ft_split(all[fd], line));
	while ((all[fd]->ret = read(fd, all[fd]->tmp, BUFF_SIZE)))
	{
		all[fd]->tmp[all[fd]->ret] = '\0';
		all[fd]->ligne = ft_realloc(all[fd]->ligne, all[fd]->tmp);
		if (all[fd]->ret == -1)
			return (-1);
		if (ft_strchr(all[fd]->ligne, '\n') != NULL)
			return (ft_split(all[fd], line));
	}
	if (all[fd]->ligne == NULL)
		return (0);
	if (ft_strlen(all[fd]->ligne) != 0 && all[fd]->ligne != NULL)
		return (ft_get_last_line(all[fd], line));
	return (0);
}
