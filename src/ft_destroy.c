/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 00:49:20 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/10 03:17:24 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	ft_destroy(t_solong *th, bool bonus)
{
	int	i;

	i = 0;
	mlx_destroy_window(th->mlx, th->win);
	mlx_destroy_image(th->mlx, th->bg);
	mlx_destroy_image(th->mlx, th->c);
	if (bonus)
		mlx_destroy_image(th->mlx, th->enm);
	mlx_destroy_image(th->mlx, th->ext);
	mlx_destroy_image(th->mlx, th->p);
	mlx_destroy_image(th->mlx, th->wall);
	while (th->map[i])
		free(th->map[i++]);
	free(th->map);
	free(th->mlx);
}
