/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_ply.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:15:40 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/11 21:03:01 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	move_ply(int keycode, t_solong *th)
{
	int			x;
	int			y;
	int			nc;

	nc = ft_checkone(th->map, 'C');
	x = th->x;
	y = th->y;
	if (keycode == 13)
		x = ft_up(th, nc, x, y);
	else if (keycode == 1)
		x = ft_down(th, nc, x, y);
	else if (keycode == 2)
		y = ft_right(th, nc, x, y);
	else if (keycode == 0)
		y = ft_left(th, nc, x, y);
	else if (keycode == 53)
		exit(0);
	if (x != th->x || y != th->y)
	{
		th->mv++;
		clear_reload(th);
	}
	return (0);
}
