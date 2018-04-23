/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puto.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 10:02:03 by oespion           #+#    #+#             */
/*   Updated: 2018/04/19 13:40:44 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_puto(int x, int y, char **map)
{
	int	is_valid;

	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y + 1);
	if (is_valid == 1)
		return (1);
	return (0);
}
