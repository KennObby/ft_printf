/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:42:11 by oilyine-          #+#    #+#             */
/*   Updated: 2024/11/05 11:47:03 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static unsigned long	ft_abs_and_sign(int nb, int *len)
{
	if (nb < 0)
	{
		ft_putchar('-');
		(*len)++;
		return ((unsigned long)(-nb));
	}
	return ((unsigned long)nb);
}

static int	ft_putnbr_rec(unsigned long nbr)
{
	if (nbr >= 10)
		return (ft_putnbr_rec(nbr / 10) + ft_putchar('0' + (nbr % 10)));
	return (ft_putchar('0' + nbr));
}

static int	ft_putnbr(int nb)
{
	int				len;
	unsigned long	nbr;

	len = 0;
	nbr = ft_abs_and_sign(nb, &len);
	len += ft_putnbr_rec(nbr);
	return (len);
}
