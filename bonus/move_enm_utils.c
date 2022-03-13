/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_enm_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:54:01 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/13 21:56:20 by aait-oma         ###   ########.fr       */
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
