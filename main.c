/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 14:59:12 by thbricqu          #+#    #+#             */
/*   Updated: 2017/02/08 14:59:14 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int my_key_func(int keycode, f_line *fdf)
{
	printf("key event %d\n", keycode);
	if (keycode == 53)
		exit(0);
	if (keycode == 15)
	{
		fdf->y = 150;
		while (fdf->y < 300)
		{
			fdf->x = 150;
			while(fdf->x < 300)
			{
				mlx_pixel_put(fdf->mlx,fdf->win, fdf->y, fdf->x, 0XFF0000);
				fdf->x++;
			}
			fdf->y++;
		}
	}
		return (0);
}

int	main()
{
	f_line *fdf;

	fdf->mlx = mlx_init();
	fdf->win = mlx_new_window(fdf->mlx, 500, 500, "42");
	fdf->y = 50;
	while (fdf->y < 150)
	{
		fdf->x = 50;
		while(fdf->x < 150)
		{
			mlx_pixel_put(fdf->mlx,fdf->win, fdf->y, fdf->x, 0X00FFFFFF);
			fdf->x++;
		}
		fdf->y++;
	}
	mlx_key_hook(fdf->win, my_key_func, fdf->mlx);
	mlx_loop(fdf->mlx);	
}