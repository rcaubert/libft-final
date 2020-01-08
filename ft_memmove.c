/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <raubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:03:28 by raubert           #+#    #+#             */
/*   Updated: 2019/11/16 16:11:03 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*srccast;
	unsigned char	*dstcast;

	i = 0;
	srccast = (unsigned char *)src;
	dstcast = (unsigned char *)dst;
	if (!srccast && !dstcast)
		return (NULL);
	if (dstcast >= srccast)
	{
		while (len-- > 0)
			dstcast[len] = srccast[len];
	}
	else
		ft_memcpy(dstcast, srccast, len);
	return (dst);
}
