/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <raubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:54:45 by raubert           #+#    #+#             */
/*   Updated: 2019/11/20 15:28:56 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*cast1;
	unsigned char	*cast2;

	i = 0;
	cast1 = (unsigned char *)s1;
	cast2 = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	while ((i < n - 1) && (cast1[i] != '\0') && (cast2[i] != '\0'))
	{
		if (cast1[i] != cast2[i])
			return (cast1[i] - cast2[i]);
		i++;
	}
	return (cast1[i] - cast2[i]);
}
