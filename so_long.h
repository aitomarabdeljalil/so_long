/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:21:48 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/18 19:09:45 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <mlx.h>
# include "libft/libft.h"

typedef struct s_so_long
{
	void	*mlx;
	void	*win;
	void	*player;
	void	*colect;
	void	*wall;
	void	*bground;
	int		height;
	int		width;
}	t_so_long;

char	**ft_get_map(int fd);
size_t	ft_tablen(char **array);
bool	ft_map_isrect(char **array);
bool	ft_check_player(char **array);
bool	ft_check_exit(char **array);
bool	ft_check_collect(char **array);
bool	ft_check_walls(char **array);
bool	ft_check_extension(char *str);

#endif
