/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:35:14 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/06/12 19:01:38 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_parse_format(const char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (specifier == 'p')
		count += ft_putptr(va_arg(args, unsigned long long));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putdigits((long)va_arg(args, int));
	else if (specifier == 'u')
		count += ft_putunbr(va_arg(args, unsigned int));
	else if (specifier == 'x')
		count += ft_puthex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (specifier == 'X')
		count += ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (specifier == '%')
		count += ft_putchar('%');
	return (count);
}
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
			count += ft_parse_format(*(++format), args);
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}