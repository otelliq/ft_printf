/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 04:35:00 by otelliq           #+#    #+#             */
/*   Updated: 2022/11/24 19:50:11 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	counthex(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	ft_puthexx(unsigned long n, char *c)
{
	if (n < 16)
		ft_putcharr(c[n]);
	else
	{
		ft_puthexx(n / 16, c);
		ft_puthexx(n % 16, c);
	}
	return (counthex(n));
}
