/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:20:59 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/18 19:11:07 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	// bool	isber;
	int i = -1;
	t_so_long th;

	// if (ac != 2)
	// 	return (0);
	// isber = ft_check_extension(av[1]);
	// if (!isber)
	// 	return (0);
	void *mlx = mlx_init();
	void *win = mlx_new_window(mlx ,13 * 42 ,5 * 42 ,"so_long");
	// mlx_pixel_put(mlx, win, 20, 20, 0xff1493);
	void *img = mlx_xpm_file_to_image(mlx, "./AnyConv.com__New Project.xpm", &th.width, &th.height);
	while ( i++ < 13 * 60)
		mlx_put_image_to_window(mlx, win ,img, i * 42 ,0);
		mlx_key_hook();
	mlx_loop(mlx);
}
