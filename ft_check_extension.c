/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_extension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:56:12 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/26 18:40:22 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

bool	ft_check_extension(char *str)
{
	char	*ext;

	ext = ft_strrchr(str, '.');
	if (!ext)
		return (false);
	return (ft_strncmp(ext, ".ber", 5) == 0);
}
