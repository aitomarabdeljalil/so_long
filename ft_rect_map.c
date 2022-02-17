/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rect_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:09:55 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/17 19:09:52 by aait-oma         ###   ########.fr       */
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

bool	ft_rect_map(char **array)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(array[i]);
	if (!ft_check_allone(array, 0) || !ft_check_allone(array, ft_tab2dlen(array)))
		return (false);
	while (array[++i])
		if (len != ft_strlen(array[i])
			|| (array[i][0] != '1' && array[i][ft_strlen(array[i]) - 1] != '1'))
			return (false);
	len = ft_tab2dlen();
	return (true);
}
