/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:27:44 by sayar             #+#    #+#             */
/*   Updated: 2021/12/08 10:56:19 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	va_start(args, str);
	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_format(args, str, i, &len);
		}
		else
		{
			ft_putchar(str[i], &len);
		}
		i++;
	}
	va_end(args);
	return (len);
}
