/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_left.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:17:30 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/08 18:44:41 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_left(t_solong *th, int nc, int x, int y)
{
	if (th->map[x][y - 1] == 'E')
		ft_msg("you won", 1);
	else if (th->map[x][y - 1] == 'E' && !nc)
	{
		th->map[x][y] = '0';
		th->map[x][--y] = 'P';
	}
	else if (th->map[x][y - 1] != '1' && th->map[x][y - 1] != 'E')
	{
		th->map[x][y] = '0';
		th->map[x][--y] = 'P';
	}
	return (y);
}
