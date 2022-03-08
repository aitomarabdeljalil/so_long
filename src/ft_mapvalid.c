/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapvalid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:32:12 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/08 19:39:48 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	**ft_mapvalid(char *path, char *els)
{
	char	**map;

	if (!ft_isber(path))
		return (NULL);
	map = ft_get_map(path);
	if (!map)
		return (NULL);
	if (!ft_checkelem(map) || !ft_checkwalls(map)
		|| !ft_checkvalidchar(map, els))
		return (NULL);
	return (map);
}
