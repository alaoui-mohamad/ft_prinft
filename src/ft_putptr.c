/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:54:22 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/23 22:05:08 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../include/ft_printf.h"
 
void ft_putptr(void *ptr, int *pos)
{
   ft_putstr("0x",pos);
   ft_convert_hex((unsigned long int)ptr, 'x', pos); 
}
