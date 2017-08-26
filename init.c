/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brel-baz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 01:47:53 by brel-baz          #+#    #+#             */
/*   Updated: 2017/06/07 11:02:12 by brel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void		init(t_data *data)
{
	data->pos_x = 11.5;
	data->pos_y = 4.5;
	data->dir_x = -1;
	data->dir_y = 0;
	data->plane_x = 0;
	data->plane_y = 0.66;
	data->hit = 0;
	data->rot = M_PI / (double)25;
	data->speed = 0.1;
}

void		after_val(t_data *data)
{
	mlx_string_put(data->mlx, data->win, 20, 780, 0x000000, "Menu");
	mlx_string_put(data->mlx, data->win, 20, 820, 0x000000, "Move :");
	mlx_string_put(data->mlx, data->win, 20, 840, 0x000000, "RIGHT = right");
	mlx_string_put(data->mlx, data->win, 20, 860, 0x000000, "LEFT  = left");
	mlx_string_put(data->mlx, data->win, 20, 880, 0x000000, "FRONT = up");
	mlx_string_put(data->mlx, data->win, 20, 900, 0x000000, "BACK  = down");
}
