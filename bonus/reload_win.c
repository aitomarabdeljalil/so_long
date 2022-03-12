/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reload_win.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:59:01 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/11 22:11:42 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	rot_ply(t_solong *th)
{
	char	*p;

	p = NULL;
	if (th->dr == 2)
		p = "img/p.xpm";
	else if (th->dr == 1)
		p = "img/pd.xpm";
	else if (th->dr == 0)
		p = "img/pl.xpm";
	else if (th->dr == 13)
		p = "img/pu.xpm";
	if (p)
		th->p = mlx_xpm_file_to_image(th->mlx, p, &th->wth, &th->hgt);
}

void	print_win(t_solong *th, int x, int y)
{
	if (th->map[x][y] == '1')
		mlx_put_image_to_window(th->mlx, th->win, th->wall, y * 60, x * 60);
	else if (th->map[x][y] == 'P')
	{
		rot_ply(th);
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
	else if (th->map[x][y] == 'N')
		mlx_put_image_to_window(th->mlx, th->win, th->enm, y * 60, x * 60);
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

void	clear_reload(t_solong *th)
{
	char	*s;
	char	*ss;

	ss = ft_itoa(th->mv);
	s = ft_strjoin("Your moves : ", ss);
	mlx_clear_window(th->mlx, th->win);
	reload_win(th);
	mlx_string_put(th->mlx, th->win, 60, 0, 0x55ff00, s);
	free (s);
	free (ss);
}