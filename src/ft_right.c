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

#include "../so_long.h"

int	ft_right(t_solong *th, int nc, int x, int y)
{
	if (th->map[x][y + 1] == 'E')
		ft_msg("you won", 1);
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
	return (y);
}
