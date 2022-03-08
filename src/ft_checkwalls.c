/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkwalls.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:17:51 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/08 18:43:53 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

size_t	ft_tablen(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

bool	ft_isrec(char **map, int tlen, unsigned long llen)
{
	int	i;

	i = 0;
	while (i < tlen)
	{
		if (ft_strlen(map[i]) != llen)
			return (false);
		i++;
	}
	return (true);
}

bool	ft_checkwalls(char **map)
{
	size_t	llen;
	int		tlen;
	int		i;

	i = 0;
	llen = ft_strlen(map[0]);
	tlen = ft_tablen(map);
	if (!ft_isrec(map, tlen, llen))
		return (false);
	while (map[0][i])
		if (map[0][i++] != '1')
			return (false);
	i = 0;
	while (map[tlen - 1][i])
		if (map[tlen - 1][i++] != '1')
			return (false);
	i = 0;
	while (map[i])
	{
		if (map[i][0] != '1' || map[i][llen - 1] != '1')
			return (false);
		i++;
	}
	return (true);
}
