/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkelem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:50:48 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/03 16:23:15 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_checkone(char **map, char c)
{
	int	i;
	int	j;
	int	ret;

	ret = 0;
	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == c)
				ret++;
			j++;
		}
		i++;
	}
	return (ret);
}

bool	ft_checkelem(char **map)
{
	if (ft_checkone(map, '1') == 0)
		return (false);
	if (ft_checkone(map, '0') == 0)
		return (false);
	if (ft_checkone(map, 'C') == 0)
		return (false);
	if (ft_checkone(map, 'P') != 1)
		return (false);
	if (ft_checkone(map, 'E') == 0)
		return (false);
	return (true);
}
