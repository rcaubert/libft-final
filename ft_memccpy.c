/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <raubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:13:34 by raubert           #+#    #+#             */
/*   Updated: 2019/11/16 16:11:32 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dstcast;
	unsigned char	*srccast;

	i = 0;
	srccast = (unsigned char *)src;
	dstcast = (unsigned char *)dst;
	while (i < n)
	{
		if (srccast[i] == (unsigned char)c)
		{
			dstcast[i] = srccast[i];
			return (dst + i + 1);
		}
		dstcast[i] = srccast[i];
		i++;
	}
	return (NULL);
}
