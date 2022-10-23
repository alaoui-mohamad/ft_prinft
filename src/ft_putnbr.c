/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello <hello@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:45:27 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/23 22:22:49 by hello            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putnbr(int nb, int *pos)
{
	size_t n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-', pos);
		n *= -1;
	}
	if (n < 10)
		ft_putchar(n + 48, pos);
	else
	{
		ft_putnbr(n / 10, pos);
		ft_putnbr(n % 10, pos);
	}
}
