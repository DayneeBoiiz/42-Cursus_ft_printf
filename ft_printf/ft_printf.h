/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:24:18 by sayar             #+#    #+#             */
/*   Updated: 2021/12/09 12:59:32 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_format(va_list args, const char *str, int i, int *len);
int		ft_printf(const char *str, ...);
int		ft_putchar(char c, int *len);
int		ft_putnbr(int n);
int		ft_putstr(char *str, int *len);
int		ft_putnbrr(unsigned int n, int *len);
int		ft_putnbr_base(unsigned int nb, int *len);
int		ft_putnbr_bbase(unsigned int nb, int *len);
void	ft_putdig(int d);
int		ft_pointer(unsigned long nb, int *len);
int		ft_putchar_solo(char c);

#endif
