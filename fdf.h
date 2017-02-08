#ifndef FDF_H
# define FDF_H

#include "libft/libft.h"
#include "mlx.h"
#include "stdio.h"


typedef struct				fdf_line
{
	void 	*mlx;
	void 	*win;
	int 	y;
	int 	x;
}							f_line;

int							get_next_line(const int fd, char **line);

#endif