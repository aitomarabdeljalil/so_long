/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_atourized_char.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:30:13 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/25 18:52:08 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

bool	ft_autorized(char **array)
{
	int	i;
	int	j;

	i = 0;
	while (array[i])
	{
		j = 0;
		while (array[i][j])
		{
			if (array[i][j] != 'E' && array[i][j] != 'C'
				&& array[i][j] != '1' && array[i][j] != '0'
				&& array[i][j] != 'P')
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}
