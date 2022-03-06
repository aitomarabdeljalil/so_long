/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:08:09 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/03 17:00:24 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_read_map(char *path)
{
	char	*tmp;
	char	*joined;
	char	*line;
	int		fd;

	joined = ft_strndup("", 1);
	fd = open(path, O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		tmp = ft_strjoin(joined, line);
		free(line);
		free(joined);
		joined = tmp;
		line = get_next_line(fd);
	}
	close(fd);
	return (joined);
}

char	**ft_get_map(char *path)
{
	char	*array;
	char	**map;

	array = ft_read_map(path);
	map = ft_split(array, '\n');
	if (array)
		free(array);
	if (!map)
		return (NULL);
	return (map);
}
