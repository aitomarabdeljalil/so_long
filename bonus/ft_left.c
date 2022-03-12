/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_left.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:17:30 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/11 18:44:13 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_left(t_solong *th, int nc, int x, int y)
{
	if (nc == 0 && th->map[x][y - 1] == 'E')
		ft_msg("you won", th, true, true);
	else if (th->map[x][y - 1] == 'N')
		ft_msg("you lost", th, true, true);
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
	th->dr = 0;
	return (y);
}
