/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brel-baz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 01:48:03 by brel-baz          #+#    #+#             */
/*   Updated: 2017/06/07 11:02:27 by brel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int			main(void)
{
	t_data data;

	data.mlx = mlx_init();
	data.win = mlx_new_window(data.mlx, WIDTH, HEIGHT, "wolf3d");
	init(&data);
	set_image_untextured(&data);
	after_val(&data);
	mlx_hook(data.win, 17, 18, exit_program, &data);
	mlx_hook(data.win, 2, 3, key_hook, &data);
	mlx_loop(data.mlx);
	mlx_destroy_image(data.mlx, data.img);
	return (0);
}
