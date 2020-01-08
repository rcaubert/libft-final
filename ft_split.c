/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <raubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:55:24 by raubert           #+#    #+#             */
/*   Updated: 2019/11/20 17:13:00 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_lines(char const *s, char c)
{
	size_t		count;
	size_t		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			if (s[i + 1] == '\0')
				return (count);
			i++;
		}
		while (s[i] && s[i] != c)
			i++;
		count++;
	}
	return (count);
}

static void		ft_cut(char *dest, char *src, size_t i)
{
	size_t		j;

	j = 0;
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	src = src + i;
}

static void		*ft_free(char **tab)
{
	int			i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char			**ft_tab(char const *s, char c, size_t count)
{
	char		**tab;
	size_t		i;
	size_t		k;

	i = 0;
	k = 0;
	if (!(tab = malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	while (k < count)
	{
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
		s = s + i;
		i = 0;
		while ((s[i] != c) && (s[i] != '\0'))
			i++;
		if(!(tab[k] = malloc(sizeof(char *) * (i + 1))))
			return (ft_free(tab));
		ft_cut(tab[k], (char *)s, i);
		k++;
	}
	tab[k] = 0;
	return (tab);
}

char			**ft_split(char const *s, char c)
{
	size_t		count;

	if (!s || !c)
		return (NULL);
	count = count_lines(s, c);
	return (ft_tab(s, c, count));
}
