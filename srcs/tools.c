/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilitaries.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glecler <glecler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 17:28:06 by glecler           #+#    #+#             */
/*   Updated: 2020/05/27 17:33:29 by glecler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf.h"

void	ft_set_x_y_4(int *x_y, int x, int y, int a, int b)
{
	x_y[0] = x;
	x_y[1] = y;
	x_y[2] = a;
	x_y[3] = b;
}

void	ft_init_inter_variables(t_inter *inter, t_player *player)
{
	inter->beta = 30.00;
	inter->plw = 0;
	inter->y_img = 0;
	inter->alpha = player->angle;
}

void	ft_set_rgb(unsigned char *rgb, unsigned char r, unsigned char g,
	unsigned char b)
{
	rgb[0] = r;
	rgb[1] = g;
	rgb[2] = b;
}

void	ft_init_a_b_alpha(t_pos *a, t_pos *b, double *alpha)
{
	a->x = 10000;
	a->y = 10000;
	b->x = 10000;
	b->y = 10000;
	*alpha = *alpha * RAD;
}

void	ft_error(int error_code)
{
	if (error_code == 1)
		ft_putstr("error: wrong character in map file\n");
	else if (error_code == 2)
		ft_putstr("error: malloc failed\n");
	else if (error_code == 3)
		ft_putstr("error: bad spawn #\n");
	else if (error_code == 4)
		ft_putstr("error: empty file\n");
	else if (error_code == 5)
		ft_putstr("error: file not found\n");
	else if (error_code == 6)
		ft_putstr("error: bad spawn\n");
	else if (error_code == 7)
		ft_putstr("error : map is not valid\n");
	else
		ft_putstr("error\n");
	exit(0);
}
