/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:30:57 by sayar             #+#    #+#             */
/*   Updated: 2021/12/08 11:06:03 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char *str, int i, int *len)
{
	if (str[i] == 'c')
		*len += ft_putchar_solo(va_arg(args, int));
	if (str[i] == 'd' || str[i] == 'i')
		*len += ft_putnbr(va_arg(args, int));
	if (str[i] == 's')
		*len = ft_putstr(va_arg(args, char *), len);
	if (str[i] == 'u')
		*len = ft_putnbrr(va_arg(args, unsigned int), len);
	if (str[i] == '%')
		*len = ft_putchar('%', len);
	if (str[i] == 'x')
		*len = ft_putnbr_base(va_arg(args, unsigned long), len);
	if (str[i] == 'X')
		*len = ft_putnbr_bbase(va_arg(args, unsigned int), len);
	if (str[i] == 'p')
		*len = ft_pointer(va_arg(args, unsigned long), len);
	return (*len);
}

int	ft_putchar_solo(char c)
{
	write(1, &c, 1);
	return (1);
}
