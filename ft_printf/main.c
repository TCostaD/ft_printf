/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:05:24 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/06/10 17:42:13 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "inc/libftprintf.h"

int	main(void)
{
	printf("função original\n");
	ft_printf("minha função\n");
	printf("\n");

	printf("o: número hexadecimal minúsculo -> %x\n", 42);
	ft_printf("m: número hexadecimal minúsculo -> %x\n", 42);

	printf("o: número hexadecimal maiúsculo -> %X\n", 42);
	ft_printf("m: número hexadecimal maiúsculo -> %X\n", 42);

	printf("o: número decimal -> %d\n", 42);
	ft_printf("m: número decimal -> %d\n", 42);

	ft_putnbr_fd(1000);
	printf("\n");
	
	return (0);
}