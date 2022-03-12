/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_right.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 23:03:24 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/06 23:03:24 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_right(t_solong *th, int nc, int x, int y)
{
	if (nc == 0 && th->map[x][y + 1] == 'E')
		ft_msg("you won", th, true, true);
	else if (th->map[x][y + 1] == 'N')
		ft_msg("you lost", th, true, true);
	else if (th->map[x][y + 1] == 'E' && !nc)
	{
		th->map[x][y] = '0';
		th->map[x][++y] = 'P';
	}
	else if (th->map[x][y + 1] != '1' && th->map[x][y + 1] != 'E')
	{
		th->map[x][y] = '0';
		th->map[x][++y] = 'P';
	}
	th->dr = 2;
	return (y);
}
