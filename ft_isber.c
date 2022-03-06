/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isber.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:54:13 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/03 12:37:58 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

bool	ft_isber(char *str)
{
	char	*ext;

	ext = ft_strrchr(str, '.');
	if (!ext)
		return (false);
	return (ft_strncmp(ext, ".ber", 5) == 0);
}
