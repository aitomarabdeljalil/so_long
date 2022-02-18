/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_extension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:56:12 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/18 18:56:36 by aait-oma         ###   ########.fr       */
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
