/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <raubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:10:04 by raubert           #+#    #+#             */
/*   Updated: 2019/11/16 16:09:53 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dstcast;
	char	*srccast;

	i = 0;
	srccast = (char *)src;
	dstcast = (char *)dst;
	if (!n || dstcast == srccast)
		return (dst);
	while (i < n)
	{
		dstcast[i] = srccast[i];
		i++;
	}
	return (dst);
}
