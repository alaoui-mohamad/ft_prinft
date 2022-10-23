/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:51:50 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/23 21:31:17 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../include/ft_printf.h"

void ft_putunsignednbr(unsigned int nb,int *pos)
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