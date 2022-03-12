/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkelem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:01:58 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/09 18:19:34 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

bool	ft_checkelem(char **map)
{
	if (ft_checkone(map, '1') == 0)
		return (false);
	if (ft_checkone(map, '0') == 0)
		return (false);
	if (ft_checkone(map, 'C') == 0)
		return (false);
	if (ft_checkone(map, 'P') != 1)
		return (false);
	if (ft_checkone(map, 'E') == 0)
		return (false);
	return (true);
}
