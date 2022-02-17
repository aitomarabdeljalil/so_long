/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:20:59 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/17 12:46:00 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

bool	ft_check_extension(char *str)
{
	while (*str != '.')
		str++;
	if (ft_strncmp(str, ".ber", 4) == 0)
	{
		if (str[4] == '\0')
			return (true);
	}
	return (false);
}

int	main(int ac, char **av)
{
	bool	isber;

	if (ac != 2)
		return (0);
	isber = ft_check_extension(av[1]);
	if (!isber)
		return (0);
	
}
