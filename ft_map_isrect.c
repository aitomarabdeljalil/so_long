/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_isrect.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:14:32 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/18 18:20:05 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

bool	ft_map_isrect(char **array)
{
	int	a;
	int	b;

	a = ft_strlen(array[0]);
	b = ft_tablen(array);
	if (a == b)
		return (false);
	return (true);
}
