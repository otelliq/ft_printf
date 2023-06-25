/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:37:02 by otelliq           #+#    #+#             */
/*   Updated: 2022/11/16 17:34:12 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstrr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstrr("(null)");
		return (6);
	}
	while (s[i])
	{
		ft_putcharr(s[i]);
		i++;
	}
	return (i);
}
