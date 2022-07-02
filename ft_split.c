/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:04:56 by mcakay            #+#    #+#             */
/*   Updated: 2022/06/30 23:22:39 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			i++;
		else
		{
			count++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	int		j;
	size_t	len;

	if (!s)
		return (0);
	len = count_words(s, c);
	strs = malloc(sizeof(char *) * (len + 1));
	if (!strs)
		return (0);
	i = -1;
	j = 0;
	while (++i < len)
	{
		while (*s == c)
			s++;
		j = 0;
		while (*(s + j) != c && *(s + j))
			j++;
		*(strs + i) = ft_substr(s, 0, j);
		s += j;
	}
	*(strs + i) = 0;
	return (strs);
}
