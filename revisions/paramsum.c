/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 15:40:05 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/28 15:59:12 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = n * - 1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	if (n < 10 && n >= 0)
		ft_putchar(n % 10 + '0');
}

int		main(int argc, char **argv)
{
	ft_putnbr(argc - 1);
	ft_putchar(argc - 1);
	ft_putchar('\n');
	return (0);
}
