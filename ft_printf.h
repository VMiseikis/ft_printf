/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:53:50 by vmiseiki          #+#    #+#             */
/*   Updated: 2021/07/27 11:45:56 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./Libft/libft.h"

size_t	ft_putstr(char *str);
size_t	ft_putchar(char c);
void	ft_putnbr(int nb);
size_t	ft_putstr(char *str);
int		ft_printf(const char *format, ...);
size_t	ft_print_int(int value);
size_t	ft_print_unsigned(unsigned int value);
void	ft_rev_str(char *str);
void	ft_convert_base(unsigned long value, int base, char *res);
size_t	ft_print_hex(const char *format, unsigned int value);
size_t	ft_print_ptr(unsigned long value);

#endif