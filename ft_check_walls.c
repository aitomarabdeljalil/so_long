/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rect_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:09:55 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/18 18:50:01 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static bool	ft_check_allone(char **array, int idx)
{
	int	i;

	i = 0;
	while (array[idx][i++])
		if (array[idx][i] != '1')
			return (false);
	return (true);
}

bool	ft_check_walls(char **array)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(array[i]);
	if (!ft_check_allone(array, 0) || !ft_check_allone(array, ft_tablen(array)))
		return (false);
	while (array[++i])
		if (len != ft_strlen(array[i])
			|| (array[i][0] != '1' && array[i][len - 1] != '1'))
			return (false);
	return (true);
}
