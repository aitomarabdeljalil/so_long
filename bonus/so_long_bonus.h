/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:17:43 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/13 22:01:58 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include "../src/common.h"
# include <time.h>

int		move_ply(int keycode, t_solong *th);
bool	ft_checkelem_b(char **map);
void	reload_win(t_solong *th);
char	**ft_mapvalid(char *path, char *els);
int		ft_up(t_solong *th, int nc, int x, int y);
int		ft_down(t_solong *th, int nc, int x, int y);
int		ft_right(t_solong *th, int nc, int x, int y);
int		ft_left(t_solong *th, int nc, int x, int y);
void	move_enm(t_solong *th);
void	clear_reload(t_solong *th);
void	enm_left(t_solong *th);
void	enm_right(t_solong *th);
void	enm_up(t_solong *th);
void	enm_down(t_solong *th);
void	move_clc(t_solong *th);
int		animation(t_solong *th);
#endif