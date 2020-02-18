/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <raubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:47:22 by raubert           #+#    #+#             */
/*   Updated: 2020/01/23 14:47:26 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	n = nb;
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}
