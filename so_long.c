/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:20:59 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/06 17:23:38 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	game_init(t_solong **th)
{
	(*th)->height = ft_tablen((*th)->map);
	(*th)->width = ft_strlen((*th)->map[0]);
	(*th)->mlx = mlx_init();
	(*th)->win = mlx_new_window((*th)->mlx, (*th)->width * 60, (*th)->height * 60, "so_long");
	(*th)->bground = mlx_xpm_file_to_image((*th)->mlx, "img/bg.xpm", &(*th)->width, &(*th)->height);
	(*th)->colect = mlx_xpm_file_to_image((*th)->mlx, "img/clt.xpm", &(*th)->width, &(*th)->height);
	(*th)->player = mlx_xpm_file_to_image((*th)->mlx, "img/ply.xpm", &(*th)->width, &(*th)->height);
	(*th)->wall = mlx_xpm_file_to_image((*th)->mlx, "img/wall.xpm", &(*th)->width, &(*th)->height);
	(*th)->ext = mlx_xpm_file_to_image((*th)->mlx, "img/ext.xpm", &(*th)->width, &(*th)->height);
}

void	print_win(t_solong **th, int x, int y)
{
	if ((*th)->map[x][y] == '1')
		mlx_put_image_to_window((*th)->mlx, (*th)->win, (*th)->wall, y * 60, x * 60);
	else if ((*th)->map[x][y] == 'P')
	{
		mlx_put_image_to_window((*th)->mlx, (*th)->win, (*th)->player, y * 60, x * 60);
		(*th)->x = x;
		(*th)->y = y;
	}
	else if ((*th)->map[x][y] == '0')
		mlx_put_image_to_window((*th)->mlx, (*th)->win, (*th)->bground, y * 60, x * 60);
	else if ((*th)->map[x][y] == 'C')
		mlx_put_image_to_window((*th)->mlx, (*th)->win, (*th)->colect, y * 60, x * 60);
	else if ((*th)->map[x][y] == 'E')
		mlx_put_image_to_window((*th)->mlx, (*th)->win, (*th)->ext, y * 60, x * 60);
}

void	reload_win(t_solong **th)
{
	int	x;
	int	y;

	x = 0;
	while ((*th)->map[x])
	{
		y = 0;
		while ((*th)->map[x][y])
		{
			print_win(th, x, y);
			y++;
		}
		x++;
	}
}

void	ft_updown(int keycode, t_solong **th, int x, int y)
{
	int	nc;

	nc = ft_checkone((*th)->map, 'C');
	if (keycode == 13 && (*th)->map[x - 1][y] == 'E' && !nc)
		x = ft_up(th, x, y);
	else if (keycode == 13 && (*th)->map[x - 1][y] != '1' && (*th)->map[x - 1][y] != 'E')
		x = ft_up(th, x, y);
	(*th)->x = x;
	(*th)->y = y;
}

void	ft_rightleft(int keycode, t_solong **th, int x, int y)
{
	int	nc;

	nc = ft_checkone((*th)->map , 'C');
	if (!nc && keycode == 2 && (*th)->map[x][y + 1] == 'E')
		exit(0);
	else if (!nc && keycode == 0 && (*th)->map[x][y + 1] == 'E')
		exit(0);
	else if (keycode == 2 && (*th)->map[x][y + 1] == 'E' && !nc)
	{
		(*th)->map[x][y] = '0';
		(*th)->map[x][++y] = 'P';
	}
	else if (keycode == 0 && (*th)->map[x][y - 1] == 'E' && !nc)
	{
		(*th)->map[x][y] = '0';
		(*th)->map[x][--y] = 'P';
	}
	else if (keycode == 2 && (*th)->map[x][y + 1] != '1' && (*th)->map[x][y + 1] != 'E')
	{
		(*th)->map[x][y] = '0';
		(*th)->map[x][++y] = 'P';
	}
	else if (keycode == 0 && (*th)->map[x][y - 1] != '1' && (*th)->map[x][y - 1] != 'E')
	{
		(*th)->map[x][y] = '0';
		(*th)->map[x][--y] = 'P';
	}
	(*th)->x = x;
	(*th)->y = y;
}

int	move_ply(int keycode, t_solong **th)
{
	int	x;
	int y;
	static int	mv;
	int	nc;

	nc = ft_checkone((*th)->map , 'C');
	x = (*th)->x;
	y = (*th)->y;
	if (keycode == 13)
		ft_updown(keycode, th, x, y);
	if (keycode == 1)
		x = ft_down(th, nc, x, y);
	if (keycode == 2 || keycode == 0)
		ft_rightleft(keycode, th, x, y);
	if (x != (*th)->x || y != (*th)->y)
	{
		mv++;
		mlx_clear_window((*th)->mlx,(*th)->win);
		reload_win(th);
		ft_putnbr_fd(mv, 1);
		ft_putchar_fd('\n', 1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_solong *th;
	int 	x;
	int 	y;

	th = malloc(sizeof(t_solong));
	x = 0;
	y = 0;
	if (ac != 2)
		return (0);
	th->map = ft_mapvalid(av[1]);
	if (!th->map)
	{
		ft_putendl_fd("Error", 1);
		return (0);
	}
	game_init(&th);
	reload_win(&th);
	mlx_key_hook(th->win, move_ply, &th);
	mlx_loop(th->mlx);
	free(th);
	return (0);
}
