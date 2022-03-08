/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:21:48 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/08 18:45:18 by aait-oma         ###   ########.fr       */
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
	void	*p;
	int		dr;
	void	*c;
	void	*wall;
	void	*enm;
	void	*ext;
	void	*bg;
	char	**map;
	int		hgt;
	int		wth;
	int		x;
	int		y;
}	t_solong;

bool	ft_isber(char *str);
int		ft_checkone(char **map, char c);
char	**ft_get_map(char *path);
size_t	ft_tablen(char **array);
char	**ft_mapvalid(char *path, char *els);
bool	ft_checkelem(char **map);
bool	ft_checkwalls(char **map);
void	ft_msg(char *msg, int fd);
int		ft_up(t_solong *th, int nc, int x, int y);
int		ft_down(t_solong *th, int nc, int x, int y);
int		ft_right(t_solong *th, int nc, int x, int y);
int		ft_left(t_solong *th, int nc, int x, int y);
bool	ft_checkvalidchar(char **map, char *str);
int		move_ply(int keycode, t_solong *th);
void	reload_win(t_solong *th);

#endif