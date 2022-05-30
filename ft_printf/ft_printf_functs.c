/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 09:53:53 by sayar             #+#    #+#             */
/*   Updated: 2021/12/08 11:01:59 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
	return (*len);
}

void	ft_putdig(int d)
{
	char	dig;

	dig = d + '0';
	write(1, &dig, 1);
}

int	ft_putnbr(int n)
{
	int	len;

	if (n <= -10)
	{
		len = ft_putnbr(n / 10);
		ft_putdig(-(n % -10));
		return (len + 1);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		ft_putdig(-n);
		return (2);
	}
	else if (n >= 10)
	{
		len = ft_putnbr(n / 10);
		ft_putdig(n % 10);
		return (len +1);
	}
	else
	{
		ft_putdig(n);
		return (1);
	}
}

int	ft_putnbrr(unsigned int n, int *len)
{
	if (n >= 10)
	{
		ft_putnbrr(n / 10, len);
		ft_putdig(n % 10);
		(*len)++;
	}
	else
	{
		ft_putdig(n);
		(*len)++;
	}
	return (*len);
}

int	ft_putstr(char *str, int *len)
{
	if (str == NULL)
		return (ft_putstr(("(null)"), len));
	while (*str)
	{
		write(1, str, 1);
		str++;
		(*len)++;
	}
	return (*len);
}
