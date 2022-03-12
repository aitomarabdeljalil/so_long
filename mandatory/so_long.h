/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:21:48 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/10 05:53:25 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../src/common.h"

int		move_ply(int keycode, t_solong *th);
bool	ft_checkelem(char **map);
void	reload_win(t_solong *th);
char	**ft_mapvalid(char *path, char *els);
int		ft_up(t_solong *th, int nc, int x, int y);
int		ft_down(t_solong *th, int nc, int x, int y);
int		ft_right(t_solong *th, int nc, int x, int y);
int		ft_left(t_solong *th, int nc, int x, int y);
#endif