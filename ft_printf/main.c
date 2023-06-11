/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:05:24 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/06/11 15:01:07 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "inc/libftprintf.h"

int	main(void)
{
	void *ptr = (void *)0x7ffeefbff5c8;
	char *str = NULL;
	int i = 0;

	printf("função original\n");
	ft_printf("minha função\n");
	printf("\n");

	printf("o: Ponteiro nulo com espec. s: %s\n", str);
	ft_printf("m: Ponteiro nulo com espec. s: %s\n\n", str);

	i = printf(" %p \n", (void *)-1);
	printf(" Valor: %d \n", i);
	i = printf(" %p \n", (void *)16);
	printf(" Valor: %d \n", i);
	i = printf(" %p \n", (void *)17);
	printf(" Valor: %d \n\n", i);

	i = ft_printf(" %p \n", (void *)-1);
	printf(" Valor: %d \n", i);
	i = ft_printf(" %p \n", (void *)16);
	printf(" Valor: %d \n", i);
	i = ft_printf(" %p \n", (void *)17);
	printf(" Valor: %d \n\n", i);
	
	printf("o: Ponteiro nulo com espec. p: %p\n", str);
	ft_printf("m: Ponteiro nulo com espec. p: %p\n\n", str);

	printf("o: número hexadecimal minúsculo -> %x\n", 42);
	ft_printf("m: número hexadecimal minúsculo -> %x\n\n", 42);

	printf("o: número hexadecimal maiúsculo -> %X\n", -42);
	ft_printf("m: número hexadecimal maiúsculo -> %X\n\n", -42);

	printf("o: número decimal -> %d\n", 42);
	ft_printf("m: número decimal -> %d\n\n", 42);

	printf("o: número decimal sem sinal: %u\n", -5);
	ft_printf("m: número decimal sem sinal: %u\n\n", -5);

	printf("o: Endereço do ponteiro: %p\n", ptr);
	ft_printf("m: Endereço do ponteiro: %p\n", ptr);
	
	printf("\n");
	
	return (0);
}