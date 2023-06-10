/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:35:14 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/06/09 16:30:17 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

int	ft_parse_format(const char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (specifier == 'p')
		count += ft_putptr(va_arg(args, void *)); // esse ainda não existe
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putdigits((long)va_arg(args, int), 10, 'l');
	else if (specifier == 'u')
		count += ft_putunbr(va_arg(args, unsigned int)); // esse ainda não existe
	else if (specifier == 'x')
		count += ft_putdigits((long)va_arg(args, int), 16, 'l');
	else if (specifier == 'X')
		count += ft_putdigits((long)va_arg(args, int), 16, 'u');
	else if (specifier == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += ft_parse_format(*format, args);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
