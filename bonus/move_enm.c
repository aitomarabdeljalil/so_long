/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_enm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 09:24:24 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/13 22:01:36 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

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
				return (j);
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
				return (i);
			j++;
		}
		i++;
	}
	return (-1);
}

void	move_enm(t_solong *th)
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
}
