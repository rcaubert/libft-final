/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <raubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:34:29 by raubert           #+#    #+#             */
/*   Updated: 2019/11/20 15:04:22 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_is_set(char c, char const *set)
{
	int			i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	size_t		start;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_is_set(s1[start], set))
		start++;
	len = ft_strlen(s1);
	if (start == len)
		return (ft_strdup(""));
	while (ft_is_set(s1[len - 1], set))
		len--;
	return (ft_substr(s1, start, len - start));
}
