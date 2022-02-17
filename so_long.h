/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:21:48 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/17 18:20:58 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <mlx.h>
# include "libft/libft.h"

char	**ft_get_map(int fd);
bool	ft_rect_map(char **array);
bool	ft_atleastone_onep(char **array);

#endif
