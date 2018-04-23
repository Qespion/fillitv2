/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 11:43:57 by groussel          #+#    #+#             */
/*   Updated: 2018/04/04 20:07:06 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	if (!(tmp = (char *)malloc(sizeof(*tmp) *
					(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	ft_bzero(tmp, ft_strlen(s1) + ft_strlen(s2) + 1);
	ft_strcat(tmp, s1);
	ft_strcat(tmp, s2);
	return (tmp);
}
