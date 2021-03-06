/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_msg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:12:08 by aait-oma          #+#    #+#             */
/*   Updated: 2022/03/10 05:42:11 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	ft_error(char *msg, t_solong *th, bool d, bool b)
{
	ft_putendl_fd(msg, 2);
	if (d)
		ft_destroy(th, b);
	exit(0);
}

void	ft_msg(char *msg, t_solong *th, bool d, bool b)
{
	ft_putendl_fd(msg, 1);
	if (d)
		ft_destroy(th, b);
	exit(0);
}
