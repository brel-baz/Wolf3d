/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brel-baz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 01:48:14 by brel-baz          #+#    #+#             */
/*   Updated: 2017/06/07 11:02:42 by brel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void		set_pixel(int x, int y, int color, t_data *data)
{
	int		index;

	if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT)
	{
		index = (y * data->size_line) + (x * data->bpp / 8);
		data->pixel[index] = (color & 0xFF);
		data->pixel[index + 1] = (color & 0xFF00) >> 8;
		data->pixel[index + 2] = (color & 0xFF0000) >> 16;
	}
}
