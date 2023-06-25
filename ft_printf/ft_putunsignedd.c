/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:16:42 by otelliq           #+#    #+#             */
/*   Updated: 2022/11/24 19:49:48 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	counterunsi(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_putunsignedd(unsigned int n)
{
	if (n >= 0 && n <= 9)
		ft_putcharr(n + 48);
	else
	{
		ft_putunsignedd(n / 10);
		ft_putunsignedd(n % 10);
	}
	return (counterunsi(n));
}
