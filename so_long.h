/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:21:48 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/06 17:18:41 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <mlx.h>
# include <errno.h>
# include <sys/types.h>
# include <fcntl.h>
# include "libft/libft.h"
# include <stdio.h>

typedef struct s_solong
{
	void	*mlx;
	void	*win;
	void	*player;
	void	*colect;
	void	*wall;
	void	*enm;
	void	*ext;
	void	*bground;
	char	**map;
	int		height;
	int		width;
	int		x;
	int		y;
}	t_solong;

bool	ft_isber(char *str);
int		ft_checkone(char **map, char c);
char	**ft_get_map(char *path);
size_t	ft_tablen(char **array);
char	**ft_mapvalid(char *path);
bool	ft_checkelem(char **map);
bool	ft_checkwalls(char **map);
int		ft_up(t_solong **th, int x, int y);
int		ft_down(t_solong **th, int nc, int x, int y);

#endif