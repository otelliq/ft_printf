/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatchooser.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:34:37 by otelliq           #+#    #+#             */
/*   Updated: 2022/11/29 01:28:34 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_formatchooser(char str, va_list args)
{
	int	length;

	length = 0;
	if (str == 'd' || str == 'i')
		length += ft_putnbrr(va_arg(args, int));
	else if (str == 'c')
		length += ft_putcharr(va_arg(args, unsigned int));
	else if (str == 's')
		length += ft_putstrr(va_arg(args, char *));
	else if (str == 'p')
	{
		length += ft_putstrr("0x");
		length += ft_puthexx(va_arg(args, unsigned long int),
				"0123456789abcdef");
	}
	else if (str == 'u')
		length += ft_putunsignedd(va_arg(args, unsigned int));
	else if (str == 'x')
		length += ft_puthexx(va_arg(args, unsigned int), "0123456789abcdef");
	else if (str == 'X')
		length += ft_puthexx(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (str == '%')
		length += ft_putcharr('%');
	return (length);
}
