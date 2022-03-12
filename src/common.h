/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:34:23 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/10 23:10:33 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <mlx.h>
# include <errno.h>
# include <sys/types.h>
# include <fcntl.h>
# include "../libft/libft.h"
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
	int		mv;
	int		x;
	int		y;
	int		x_e;
	int		y_e;
}	t_solong;

bool	ft_isber(char *str);
int		ft_checkone(char **map, char c);
char	**ft_get_map(char *path);
size_t	ft_tablen(char **array);
bool	ft_checkwalls(char **map);
void	ft_msg(char *msg, t_solong *th, bool d, bool b);
bool	ft_checkvalidchar(char **map, char *str);
void	ft_destroy(t_solong *th, bool bonus);
int		ft_exit(t_solong *th);
void	ft_error(char *msg, t_solong *th, bool d, bool b);
#endif