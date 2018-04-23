/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 11:37:54 by groussel          #+#    #+#             */
/*   Updated: 2018/04/04 11:37:58 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(const char *s)
{
	if (!s)
		return ;
	if (write(1, s, ft_strlen(s)))
	{
	}
	if (write(1, "\n", 1))
	{
	}
}