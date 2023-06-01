/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:35:14 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/06/01 16:47:45 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

t_print	ft_init_print(t_print *print)
{
	print->width = 0;
	print->precision = 0;
	print->zero = 0;
	print->point = 0;
	print->dash = 0;
	print->len = 0;
	print->sign = 0;
	print->is_zero = 0;
	print->percent = 0;
	print->space = 0;
	return (print);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int		len;

	va_start(args, format);
	// O que eu realmente quero dizer fazendo o que fiz até aqui --> ft_printf_core(format, args);

	while (*format)
	{
		
	}

	va_end(args);

	return (len);
}
