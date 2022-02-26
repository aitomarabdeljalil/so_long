/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:18:33 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/26 18:42:13 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_get_map(int fd)
{
	char	**map;
	char	*line;
	int		i;

	i = 0;
	line = get_next_line(fd);
	while (line)
	{
		map[i++] = line;
		if (line[0] == '\n')
			errno = 1;
		free(line);
		line = get_next_line(fd);
	}
	map[i] = NULL;
	return (map);
}
