/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello <hello@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 02:29:38 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/23 22:22:10 by hello            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	detect_flag(va_list arg, char nformat, int *pos)
{
	if (nformat == 'c')
		ft_putchar((char)va_arg(arg, int), pos);
	else if (nformat == 's')
		ft_putstr(va_arg(arg, char *), pos);
	else if (nformat == 'p')
		ft_putptr(va_arg(arg, void *), pos);
	else if (nformat == 'i' || nformat == 'd')
		ft_putnbr(va_arg(arg, int), pos);
	else if (nformat == 'x')
		ft_convert_hex(va_arg(arg, unsigned int), nformat, pos);
	else if (nformat == 'X')
		ft_convert_hex(va_arg(arg, unsigned int), nformat, pos);
	else if (nformat == 'u')
		ft_putunsignednbr(va_arg(arg, unsigned int), pos);
	else if (nformat == '%')
		ft_putchar(nformat, pos);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		pos;

	pos = 0;
	va_start(arg, format);
	i = -1;
	while (format[++i])
	{
		if (format[i] != '%')
			ft_putchar(format[i], &pos);
		else
		{
			detect_flag(arg, format[i + 1], &pos);
			i++;
		}
	}
	va_end(arg);
	return (pos);
}
