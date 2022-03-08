/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_ply.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:27:42 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/08 19:09:55 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	clear_reload(t_solong *th, int mv)
{
	mlx_clear_window(th->mlx, th->win);
	reload_win(th);
	ft_putnbr_fd(mv, 1);
	ft_putchar_fd('\n', 1);
}

int	move_ply(int keycode, t_solong *th)
{
	int			x;
	int			y;
	static int	mv;
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
		mv++;
		clear_reload(th, mv);
	}
	return (0);
}
