/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:20:59 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/08 18:58:24 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	game_init(t_solong *th)
{
	th->hgt = ft_tablen(th->map);
	th->wth = ft_strlen(th->map[0]);
	th->mlx = mlx_init();
	th->win = mlx_new_window(th->mlx, th->wth * 60, th->hgt * 60, "so_long");
	th->bg = mlx_xpm_file_to_image(th->mlx, "img/bg.xpm", &th->wth, &th->hgt);
	th->c = mlx_xpm_file_to_image(th->mlx, "img/clt.xpm", &th->wth, &th->hgt);
	th->p = mlx_xpm_file_to_image(th->mlx, "img/ply.xpm", &th->wth, &th->hgt);
	th->wall = mlx_xpm_file_to_image(th->mlx, "img/wl.xpm", &th->wth, &th->hgt);
	th->ext = mlx_xpm_file_to_image(th->mlx, "img/ext.xpm", &th->wth, &th->hgt);
}

void	print_win(t_solong *th, int x, int y)
{
	if (th->map[x][y] == '1')
		mlx_put_image_to_window(th->mlx, th->win, th->wall, y * 60, x * 60);
	else if (th->map[x][y] == 'P')
	{
		mlx_put_image_to_window(th->mlx, th->win, th->p, y * 60, x * 60);
		th->x = x;
		th->y = y;
	}
	else if (th->map[x][y] == '0')
		mlx_put_image_to_window(th->mlx, th->win, th->bg, y * 60, x * 60);
	else if (th->map[x][y] == 'C')
		mlx_put_image_to_window(th->mlx, th->win, th->c, y * 60, x * 60);
	else if (th->map[x][y] == 'E')
		mlx_put_image_to_window(th->mlx, th->win, th->ext, y * 60, x * 60);
}

void	reload_win(t_solong *th)
{
	int	x;
	int	y;

	x = 0;
	while (th->map[x])
	{
		y = 0;
		while (th->map[x][y])
		{
			print_win(th, x, y);
			y++;
		}
		x++;
	}
}

int	ft_exit(t_solong *th)
{
	(void)th;
	exit(0);
}

int	main(int ac, char **av)
{
	t_solong	th;
	int			x;
	int			y;

	if (ac != 2)
		ft_msg("argc != 2", 2);
	x = 0;
	y = 0;
	th.map = ft_mapvalid(av[1], "01PCE");
	if (!th.map)
		ft_msg("map error", 2);
	game_init(&th);
	reload_win(&th);
	mlx_hook(th.win, 2, 1L << 1, move_ply, &th);
	mlx_hook(th.win, 17, 2, ft_exit, &th);
	mlx_loop(th.mlx);
	return (0);
}
