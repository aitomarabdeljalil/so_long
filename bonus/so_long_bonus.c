/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:20:59 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/13 22:02:33 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	game_init(t_solong *th)
{
	srand(time(NULL));
	th->mv = 0;
	th->hgt = ft_tablen(th->map);
	th->wth = ft_strlen(th->map[0]);
	th->mlx = mlx_init();
	th->win = mlx_new_window(th->mlx, th->wth * 60, th->hgt * 60, "so_long");
	th->bg = mlx_xpm_file_to_image(th->mlx, "img/bg.xpm", &th->wth, &th->hgt);
	th->c = mlx_xpm_file_to_image(th->mlx, "img/1.xpm", &th->wth, &th->hgt);
	th->p = mlx_xpm_file_to_image(th->mlx, "img/p.xpm", &th->wth, &th->hgt);
	th->wall = mlx_xpm_file_to_image(th->mlx, "img/wl.xpm", &th->wth, &th->hgt);
	th->ext = mlx_xpm_file_to_image(th->mlx, "img/ext.xpm", &th->wth, &th->hgt);
	th->enm = mlx_xpm_file_to_image(th->mlx, "img/e.xpm", &th->wth, &th->hgt);
}

int	main(int ac, char **av)
{
	t_solong	th;
	int			x;
	int			y;

	if (ac != 2)
		ft_error("argc != 2", NULL, false, true);
	x = 0;
	y = 0;
	th.map = ft_mapvalid(av[1], "01PCEN");
	if (!th.map)
		ft_error("map error", &th, true, true);
	game_init(&th);
	clear_reload(&th);
	mlx_hook(th.win, 2, 1L << 1, move_ply, &th);
	mlx_hook(th.win, 17, 2, ft_exit, &th);
	mlx_loop_hook(th.mlx, animation, &th);
	mlx_loop(th.mlx);
	ft_destroy(&th, true);
	return (0);
}
