/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <raubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 21:14:55 by raubert           #+#    #+#             */
/*   Updated: 2019/11/20 11:58:11 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_calc(int len, int test, int neg)
{
	char	*ret;

	if (!(ret = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ret[len] = '\0';
	while (len--)
	{
		ret[len] = test % 10 + 48;
		test = test / 10;
	}

	if (neg == 1)
		ret[0] = '-';
	return (ret);
}
char	*ft_itoa(int n)
{
	int		len;
	int		test;
	int		nb;
	int		neg;

	len = 0;
	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nb = n;
	if (n <= 0)
		len++;
	if (n < 0)
	{
		nb = nb * -1;
		neg++;
	}
	test = nb;
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (ft_calc(len, test, neg));
}
