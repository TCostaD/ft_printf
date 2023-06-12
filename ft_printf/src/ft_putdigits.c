/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:38:15 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/06/12 19:01:49 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_putdigits(long nb)
{
	int		count;

	count = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		return (ft_putdigits(-nb) + 1);
	}
	if (nb < 10)
	{
		count += ft_putchar(nb + '0');
		return (count);
	}
	count += ft_putdigits(nb / 10);
	count += ft_putchar(nb % 10 + '0');
	return (count);
}