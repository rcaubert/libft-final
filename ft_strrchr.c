/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <raubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:36:52 by raubert           #+#    #+#             */
/*   Updated: 2019/11/16 16:15:20 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		l;
	char	*cast;

	cast = (char *)s;
	l = ft_strlen(cast);
	while (l >= 0)
	{
		if (cast[l] == c)
			return (cast + l);
		l--;
	}
	return (0);
}
