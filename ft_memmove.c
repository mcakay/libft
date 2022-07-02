/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:49:22 by mcakay            #+#    #+#             */
/*   Updated: 2022/07/01 00:17:56 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len--)
			*(((char *)dst) + len) = *(((char *)src) + len);
	}
	else
	{
		while (i < len)
		{
			*(((char *)dst) + i) = *(((char *)src) + i);
			i++;
		}
	}
	return (dst);
}
