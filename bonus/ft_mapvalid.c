/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapvalid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:32:12 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/09 19:57:53 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	**ft_mapvalid(char *path, char *els)
{
	char	**map;

	if (!ft_isber(path))
		return (NULL);
	map = ft_get_map(path);
	if (!map)
		return (NULL);
	if (!ft_checkvalidchar(map, els) || !ft_checkelem_b(map)
		|| !ft_checkwalls(map))
		return (NULL);
	return (map);
}
