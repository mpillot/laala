/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 02:04:44 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/23 13:37:52 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = (- nb);
	}
	if (nb >= 9)
	{
		ft_putnbr(nb/10);
		ft_putchar(nb % 10 + '0');
	}
	if (nb <9)
		ft_putchar(nb % 10 + '0');
}
