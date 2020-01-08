/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <raubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:06:16 by raubert           #+#    #+#             */
/*   Updated: 2019/11/20 15:58:24 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*casts;

	casts = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*casts == (unsigned char)c)
			return (casts);
		casts++;
	}
	return (NULL);
}
