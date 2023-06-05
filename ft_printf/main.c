/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:05:24 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/06/05 18:11:49 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	num = 42;
	printf("O número escolhido é o: %5d Fim\n", num);
	printf("Colocando zeros no número: %03d\n", num);
	return (0);
}