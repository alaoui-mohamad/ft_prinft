/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello <hello@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:55:55 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/23 22:22:14 by hello            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_hex(unsigned long int ptr, char x, int *len)
{
	unsigned long int	base;

	base = 16;
	if (ptr < base)
	{
		if (x == 'x')
			ft_putchar("0123456789abcdef"[ptr % base], len);
		else
			ft_putchar("0123456789ABCDEF"[ptr % base], len);
	}
	else
	{
		ft_convert_hex(ptr / base, x, len);
		ft_convert_hex(ptr % base, x, len);
	}
}
