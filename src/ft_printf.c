/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 13:46:28 by vmiseiki          #+#    #+#             */
/*   Updated: 2021/08/10 13:15:12 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_handle_tag(const char *format, va_list arg)
{
	if (*format == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (*format == 'd' || *format == 'i')
		return (ft_print_int(va_arg(arg, int)));
	if (*format == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (*format == 'u')
		return (ft_print_unsigned (va_arg(arg, unsigned int)));
	if (*format == 'x' || *format == 'X')
		return (ft_print_hex(format, va_arg(arg, unsigned int)));
	if (*format == 'p')
		return (ft_print_ptr(va_arg(arg, unsigned long)));
	if (*format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	size_t	size;
	va_list	arg;

	va_start(arg, format);
	size = 0;
	while (*format)
	{
		if (*format != '%')
		{
			size += ft_putchar(*format);
			format++;
		}
		else
		{
			format++;
			size += ft_handle_tag(format, arg);
			format++;
		}		
	}
	va_end (arg);
	return (size);
}
