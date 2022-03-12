/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_enm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 09:24:24 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/12 09:38:08 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	enm_left(t_solong *th)
{
	if (th->map[th->x_e][th->y_e - 1] == '0')
	{
		th->map[th->x_e][th->y_e] = '0';
		th->map[th->x_e][--th->y_e] = 'N';
	}
	else if (th->map[th->x_e][th->y_e - 1] == 'P')
	{
		th->map[th->x_e][th->y_e] = '0';
		th->map[th->x_e][--th->y_e] = 'N';
		ft_msg("you lost", th, true, true);
	}
}

void	enm_right(t_solong *th)
{
	if (th->map[th->x_e][th->y_e + 1] == '0')
	{
		th->map[th->x_e][th->y_e] = '0';
		th->map[th->x_e][++th->y_e] = 'N';
	}
	else if (th->map[th->x_e][th->y_e + 1] == 'P')
	{
		th->map[th->x_e][th->y_e] = '0';
		th->map[th->x_e][++th->y_e] = 'N';
		ft_msg("you lost", th, true, true);
	}
}

void	enm_up(t_solong *th)
{
	if (th->map[th->x_e - 1][th->y_e] == '0')
	{
		th->map[th->x_e][th->y_e] = '0';
		th->map[--th->x_e][th->y_e] = 'N';
	}
	else if (th->map[th->x_e - 1][th->y_e] == 'P')
	{
		th->map[th->x_e][th->y_e] = '0';
		th->map[--th->x_e][th->y_e] = 'N';
		ft_msg("you lost", th, true, true);
	}
}

void	enm_down(t_solong *th)
{
	if (th->map[th->x_e + 1][th->y_e] == '0')
	{
		th->map[th->x_e][th->y_e] = '0';
		th->map[++th->x_e][th->y_e] = 'N';
	}
	else if (th->map[th->x_e + 1][th->y_e] == 'P')
	{
		th->map[th->x_e][th->y_e] = '0';
		th->map[++th->x_e][th->y_e] = 'N';
		ft_msg("you lost", th, true, true);
	}
}

int	enm_pos_y(t_solong *th)
{
	int	i;
	int	j;

	i = 0;
	while (th->map[i])
	{
		j = 0;
		while (th->map[i][j])
		{
			if (th->map[i][j] == 'N')
				return(j);
			j++;
		}
		i++;
	}
	return (-1);
}

int	enm_pos_x(t_solong *th)
{
	int	i;
	int	j;

	i = 0;
	while (th->map[i])
	{
		j = 0;
		while (th->map[i][j])
		{
			if (th->map[i][j] == 'N')
				return(i);
			j++;
		}
		i++;
	}
	return (-1);
}

void	put_image(t_solong *th, char *relative_path)
{
	int i;
	int j;
	void	*img;

	i = 0;
	img = mlx_xpm_file_to_image(th->mlx, relative_path, &th->wth, &th->hgt);
	while (th->map[i])
	{
		j = 0;
		while (th->map[i][j])
		{
			if (th->map[i][j] == 'C')
			{
				mlx_put_image_to_window(th->mlx, th->win, th->bg, j * 60, i * 60);
				mlx_put_image_to_window(th->mlx, th->win, img, j * 60, i * 60);
			}
			j++;
		}
		i++;
	}
}
void	move_clc(t_solong *th)
{
	static	int i;
	static int mode;

	if (i == 0)
		mode = 1;
	if (i == 40)
		mode = 0;
	if (i == 10)
		put_image(th, "img/1.xpm");
	else if (i == 20)
		put_image(th, "img/2.xpm");
	else if (i == 30)
		put_image(th, "img/3.xpm");
	else if (i == 40)
		put_image(th, "img/4.xpm");
	if (mode == 1)
		i++;
	if (mode == 0)
		i--;
}

int	move_enm(t_solong *th)
{
	int	rd;

	th->x_e = enm_pos_x(th);
	th->y_e = enm_pos_y(th);
	rd = rand() % 30;
	if (rd == 1)
		enm_left(th);
	else if (rd == 2)
		enm_right(th);
	else if (rd == 3)
		enm_up(th);
	else if (rd == 4)
		enm_down(th);
	clear_reload(th);
	move_clc(th);
	return (0);
}

