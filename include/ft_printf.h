/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:46:54 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/23 22:05:19 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_putnbr(int nb, int *pos);
void    ft_putunsignednbr(unsigned int nb,int *pos);
void    ft_putptr(void *ptr, int *pos);
void	ft_convert_hex(unsigned long int ptr, char x, int *len);
int     ft_printf(const char *format, ...);
void    ft_putstr(char *str, int *pos);
void    ft_putchar(char c, int *pos);

#endif