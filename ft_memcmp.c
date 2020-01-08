/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <raubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:18:24 by raubert           #+#    #+#             */
/*   Updated: 2019/11/14 14:40:03 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*casts1;
	unsigned char	*casts2;
	size_t			i;

	i = 0;
	casts1 = (unsigned char *)s1;
	casts2 = (unsigned char *)s2;
	while (casts1[i] == casts2[i] && i < n - 1)
		i++;
	if (i == n)
		return (0);
	return (casts1[i] - casts2[i]);
}
