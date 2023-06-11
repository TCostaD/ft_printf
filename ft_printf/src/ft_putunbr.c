/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:45:49 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/06/10 18:47:19 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

int	ft_intlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	char	*str;
	int		len;

	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (len > 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

int	ft_putunbr(unsigned int nb)
{
	int		count;
	char	*str;

	count = 0;
	str = ft_utoa(nb);
	count = ft_putstr(str);
	free(str);
	return (count);
}
