/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 03:58:48 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/06/12 19:21:36 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_puthex(unsigned long nb, char *base)
{
	int		count;

	count = 0;int		ft_putnbr_fd(int n)
	if (nb < 16)
		return (ft_putchar(base[nb]));
	count += ft_puthex(nb / 16, base);
	count += ft_putchar(base[nb % 16]);
	return (count);
}

int	ft_putptr(unsigned long ptr)
{
	int			count;

	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_puthex(ptr, "0123456789abcdef");
	return (count);
}
