/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functs1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:11:30 by sayar             #+#    #+#             */
/*   Updated: 2021/12/09 12:59:19 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nb, int *len)
{
	char	*str;

	str = "0123456789abcdef";
	if (nb < 16)
	{
		write(1, &str[nb], 1);
		(*len)++;
	}
	else
	{
		ft_putnbr_base(nb / 16, len);
		ft_putnbr_base(nb % 16, len);
	}
	return (*len);
}

int	ft_putnbr_bbase(unsigned int nb, int *len)
{
	char	*str1;

	str1 = "0123456789ABCDEF";
	if (nb < 16)
	{
		write(1, &str1[nb], 1);
		(*len)++;
	}
	else
	{
		ft_putnbr_bbase(nb / 16, len);
		ft_putnbr_bbase(nb % 16, len);
	}
	return (*len);
}

int	ft_pointer(unsigned long nb, int *len)
{
	char	*base;
	char	str[18];
	int		i;

	i = 0;
	base = "0123456789abcdef";
	if (nb == 0)
		return (ft_putstr("0x0", len));
	ft_putchar('0', len);
	ft_putchar('x', len);
	while (nb != 0)
	{
		str[i] = base[nb % 16];
		nb /= 16;
		(*len)++;
		i++;
	}
	while (i > 0)
		write(1, &str[--i], 1);
	return (*len);
}
