/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:58:33 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/23 21:30:33 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../include/ft_printf.h"

void ft_putchar(char c, int *pos)
{
    write(1, &c, 1);
    (*pos)++;
}