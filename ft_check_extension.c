/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_extension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:56:12 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/25 18:49:53 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//strrchr
bool	ft_check_extension(char *str)
{
	while (*str != '.' && *str)
		str++;
	return (ft_strncmp(str, ".ber", 5) == 0);
}
