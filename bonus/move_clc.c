/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_clc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:58:00 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/13 22:08:32 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	put_image(t_solong *t, char *relative_path)
{
	int		i;
	int		j;
	void	*img;

	i = 0;
	img = mlx_xpm_file_to_image(t->mlx, relative_path, &t->wth, &t->hgt);
	while (t->map[i])
	{
		j = 0;
		while (t->map[i][j])
		{
			if (t->map[i][j] == 'C')
			{
				mlx_put_image_to_window(t->mlx, t->win, t->bg, j * 60, i * 60);
				mlx_put_image_to_window(t->mlx, t->win, img, j * 60, i * 60);
			}
			j++;
		}
		i++;
	}
}

void	move_clc(t_solong *th)
{
	static int	i;

	if (i <= 15)
		put_image(th, "img/1.xpm");
	else if (i <= 30)
		put_image(th, "img/2.xpm");
	else if (i <= 45)
		put_image(th, "img/3.xpm");
	else if (i <= 60)
		put_image(th, "img/4.xpm");
	i++;
	if (i == 60)
		i = 0;
}

int	animation(t_solong *th)
{
	move_enm(th);
	move_clc(th);
	return (0);
}
