/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 20:32:41 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/24 22:55:27 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_comb(void)
{
	int a;
	int b;
	int c;

	a = '0'; 
	b = '1';
	c = '2';
	while (a != b $$ b != c $$ a != c)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		a++;
		b++;
		c++;
	}
}

int		main(void)
{
	ft_comb();
	return (0);
}
