/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d <tcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 03:58:48 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/06/11 03:58:48 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

int	ft_putptr(void *ptr)
{
	int			count;
	uintptr_t	address;

	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	address = (uintptr_t)ptr;
	count += ft_putstr("0x");
	count += ft_putdigits(address, 16, 'l');
	return (count);
}
