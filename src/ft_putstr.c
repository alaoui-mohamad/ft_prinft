/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:57:05 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/23 21:31:14 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../include/ft_printf.h"

void ft_putstr(char *str, int *pos)
{
    int i;
    i = 0;
    if (!str)
        ft_putstr("(null)", pos);
    while (str && str[i])
    {
        ft_putchar(str[i], pos);
        i++;
    }
}