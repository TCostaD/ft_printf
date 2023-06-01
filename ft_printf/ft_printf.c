/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:35:14 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/05/30 14:59:49 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	int		done;

	va_start(args, format);
	// O que eu realmente quero dizer fazendo o que fiz até aqui --> ft_printf_core(format, args);

	while (*format)
	{
		
	}

	va_end(args);

	return (done);
}