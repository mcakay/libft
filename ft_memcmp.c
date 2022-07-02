/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:52:59 by mcakay            #+#    #+#             */
/*   Updated: 2022/07/01 00:16:26 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(((unsigned char *) s1) + i) != *(((unsigned char *) s2) + i))
			return (*(((unsigned char *) s1) + i)
				- *(((unsigned char *) s2) + i));
		i++;
	}
	return (0);
}
