/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:32:52 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/12 15:33:14 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t size)
{
	char	*copy;

	copy = malloc(size + 1);
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, src, size + 1);
	return (copy);
}
