/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rect_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:09:55 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/17 16:32:02 by aait-oma         ###   ########.fr       */
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
		free(line);
		line = get_next_line(fd);
	}
	map[i] = NULL;
	return (map);
}

bool	ft_rect_map(char **array)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(array[i]);
	while (array[++i])
		if (len != ft_strlen(array[i]))
			return (false);
	if (len == i)
		return (false);
	return (true);
}
