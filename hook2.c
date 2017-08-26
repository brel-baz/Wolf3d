/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brel-baz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 01:47:43 by brel-baz          #+#    #+#             */
/*   Updated: 2017/06/07 11:01:56 by brel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		hook_after_val(t_data *data, int key)
{
	if (key == MENU_HIDE)
		after_val(data);
	return (0);
}

void	chose_hook(t_data *data, int key)
{
	if (key >= 0)
	{
		key_hook_r_left_right(key, data);
		key_hook_left_right(key, data);
		key_hook_stop_hit(key, data);
	}
}

int		exit_program(void)
{
	ft_putendl("Exit Program");
	exit(1);
	return (0);
}

int		key_hook(int key, t_data *data)
{
	chose_hook(data, key);
	if (key == ESC)
		err_exit("Exit Program", *data);
	if (key >= 0)
	{
		set_image_untextured(data);
		mlx_string_put(data->mlx, data->win, 20, 10, 0xB9121B, "exit = esc");
		mlx_string_put(data->mlx, data->win, 20, 30, 0xB9121B, "help = H");
		hook_after_val(data, key);
	}
	return (0);
}
