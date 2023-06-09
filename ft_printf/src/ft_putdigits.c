/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:38:15 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/06/09 16:43:51 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

int	ft_putdigits(int nb, int base)
{
	int		count;
	char	*symbolslow;
	char	*symbolsup;

	symbolslow = "0123456789abcdef";
	symbolsup = "0123456789ABCDEF";
	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb *= -1;
	}
	if (nb < base)
		count += ft_putchar(symbolslow[nb]);
	else
	{
		count += ft_putdigits(nb / base, base);
		count += ft_putchar(symbolslow[nb % base]);
	}
	return (count);
}