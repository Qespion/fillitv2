/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 11:52:29 by groussel          #+#    #+#             */
/*   Updated: 2018/04/04 20:08:26 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*tmp;

	if (!s)
		return (NULL);
	if (!(tmp = (char *)malloc(sizeof(*tmp) * (len + 1))))
		return (NULL);
	ft_bzero(tmp, len + 1);
	ft_strncpy(tmp, &s[start], len);
	return (tmp);
}
