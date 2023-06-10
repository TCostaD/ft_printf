/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:38:15 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/06/10 17:24:26 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

int	ft_putdigits(long nb, int base, char cap)
{
	int		count;
	char	*symbolslow;
	char	*symbolsup;

	symbolslow = "0123456789abcdef";
	symbolsup = "0123456789ABCDEF";
	count = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		return (ft_putdigits(-nb, base, cap) + 1);
	}
	if (nb < base)
	{
		if (cap == 'u')
			return (ft_putchar(symbolsup[nb]));
		else if (cap == 'l')
			return (ft_putchar(symbolslow[nb]));
	}
	count = ft_putdigits(nb / base, base, cap);
	if (cap == 'u')
		return (ft_putchar(symbolsup[nb % base]));
	else if (cap == 'l')
		return (ft_putchar(symbolslow[nb % base]));
	return (0);
}
