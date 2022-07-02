/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:51:06 by mcakay            #+#    #+#             */
/*   Updated: 2022/07/01 00:19:03 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (*(s + i))
	{
		if (*(s + i) == (char)c)
			ptr = (char *)(s + i);
		i++;
	}
	if (*(s + i) == (char)c)
		ptr = (char *)(s + i);
	return (ptr);
}
