/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello <hello@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:51:50 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/23 22:22:39 by hello            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putunsignednbr(unsigned int nb, int *pos)
{
	if (nb < 0)
	{
		ft_putchar('-', pos);
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putunsignednbr(nb / 10, pos);
		ft_putunsignednbr(nb % 10, pos);
	}
	else
		ft_putchar(nb + '0', pos);
}
