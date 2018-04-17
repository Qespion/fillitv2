/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 18:43:27 by oespion           #+#    #+#             */
/*   Updated: 2018/04/14 10:51:01 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_sqrt(int nb)
{
	int	r;

	r = 2;
	while (r <= nb / 2)
	{
		if (r * r == nb)
			return (r);
		r++;
	}
	return (0);
}

void	ft_free_tab(char **tab)
{
	int	r;

	r = 0;
	while (tab[r])
	{
		free(tab[r]);
		r++;
	}
	free(tab);
}
