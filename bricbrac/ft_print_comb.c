/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 16:43:46 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/17 17:29:00 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_print_comb(void)
{
	int a = '0';
	int b = '1';
	int c = '2';
	

	while (a != b && b != c  && c != a)
	{
		if (a == '9')
			a = '1';
		if (b == '9')
			b = '1';
		if (c == '9')
			c = '1';
		b++;
		c++;
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
