/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:12:56 by otelliq           #+#    #+#             */
/*   Updated: 2022/11/24 19:51:50 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	counter(long int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	else if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_putnbrr(long int n)
{
	int	count;

	count = counter(n);
	if (n >= 0 && n <= 9)
		ft_putcharr(n + 48);
	else if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		ft_putnbrr(n);
	}
	else
	{
		ft_putnbrr(n / 10);
		ft_putnbrr(n % 10);
	}
	return (count);
}
