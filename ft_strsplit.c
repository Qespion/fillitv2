/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 11:51:04 by groussel          #+#    #+#             */
/*   Updated: 2018/04/04 20:08:57 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *s, char c)
{
	int				count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**result;
	int		i;
	int		pos[2];

	if (!s)
		return (NULL);
	if (!(result = (char **)ft_strnew(sizeof(*result) * count_words(s, c))))
		return (NULL);
	i = 0;
	pos[0] = 0;
	pos[1] = 0;
	while (i < count_words(s, c))
	{
		while (s[pos[0]] == c)
			pos[0]++;
		pos[1] = pos[0];
		while (s[pos[0]] != c)
			pos[0]++;
		if (!(result[i] = (char *)ft_strnew(pos[0] - pos[1])))
			return (NULL);
		result[i] = ft_strsub(s, pos[1], pos[0] - pos[1]);
		i++;
	}
	result[i] = NULL;
	return (result);
}
