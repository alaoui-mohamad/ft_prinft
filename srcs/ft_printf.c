/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 02:29:38 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/23 18:01:19 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void ft_putchar(char c, int *pos)
{
    write(1, &c, 1);
    (*pos)++;
}
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
void detect_flag(va_list arg, char nformat, int *pos)
{
    char *str;
    if (nformat == 'c')
        ft_putchar((char)va_arg(arg, int), pos);
    if (nformat == 's')
        ft_putstr(va_arg(arg, char *), pos);
}
int ft_printf(const char *format, ...)
{
    va_list arg;
    int i;
    int pos;

    int ret;
    va_start(arg, format);
    i = -1;
    while (format[++i])
    {
        if (format[i] != '%')
            write(1, &format[i], 1);
        else
        {
            detect_flag(arg, format[i + 1], &pos);
            i++;
        }
    }
    va_end(arg);
    return (pos);
}

int main()
{

    printf ("%d",ft_printf("alaoui %s qweew %c", NULL , 'h'));
    return 0;
}