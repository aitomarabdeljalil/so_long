/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:20:59 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/25 18:56:41 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	bool	isber;
	int i = -1;
	t_solong th;

	if (ac != 2)
		return (0);
	isber = ft_check_extension(av[1]);
	if (!isber)
		return (0);
	th.mlx = mlx_init();
	th.win = mlx_new_window(th.mlx ,13 * 42 ,5 * 42 ,"so_long");
	th.player = mlx_xpm_file_to_image(th.mlx, "img/messi.xpm", &th.width, &th.height);
	while ( i++ < 13 * 60)
		mlx_put_image_to_window(th.mlx, th.win ,th.player, i * 42 ,0);
	// mlx_key_hook();
	mlx_loop(th.mlx);
	return (0);
}
