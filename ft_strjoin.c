/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:59:44 by mcakay            #+#    #+#             */
/*   Updated: 2022/06/30 21:00:07 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	str = malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2))) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (*(s1 + i))
	{
		*(str + i) = *((char *)(s1 + i));
		i++;
	}
	while (*(s2 + j))
	{
		*(str + i + j) = *((char *)(s2 + j));
		j++;
	}
	*(str + i + j) = '\0';
	return (str);
}
