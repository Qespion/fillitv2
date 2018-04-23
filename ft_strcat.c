/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 11:41:07 by groussel          #+#    #+#             */
/*   Updated: 2018/04/04 11:41:11 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (dest[++i])
		;
	while (src[++j])
		dest[i++] = src[j];
	dest[i] = '\0';
	return (dest);
}
