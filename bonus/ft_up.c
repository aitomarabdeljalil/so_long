/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_up.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 11:49:42 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/10 06:10:45 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_up(t_solong *th, int nc, int x, int y)
{
	if (nc == 0 && th->map[x - 1][y] == 'E')
		ft_msg("you won", th, true, true);
	else if (th->map[x - 1][y] == 'N')
		ft_msg("you lost", th, true, true);
	else if (th->map[x - 1][y] == 'E' && !nc)
	{
		th->map[x][y] = '0';
		th->map[--x][y] = 'P';
	}
	else if (th->map[x - 1][y] != '1' && th->map[x - 1][y] != 'E')
	{
		th->map[x][y] = '0';
		th->map[--x][y] = 'P';
	}
	th->dr = 13;
	return (x);
}
