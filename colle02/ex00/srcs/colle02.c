/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/10 10:06:41 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/23 14:21:17 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    ft_1(char c, int x)
{
	int blarge;

	blarge = 0;
	ft_putchar(c);
	while (blarge < x - 2)
	{
		ft_putchar('B');
		blarge++;
	}
	if (x > 1)
		ft_putchar(c);
	ft_putchar('\n');
}


void    ft_2(int x, int y)
{
	int blarge;
	int bhight;

	blarge = 0;
	bhight = 0;
	while (blarge < y - 2)
	{
		ft_putchar('B');
		while (bhight < x - 2)
		{
			ft_putchar(' ');
			bhight++;
		}
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		blarge++;
		bhight = 0;
	}
}

void    colle2(int x, int y)
{
	char a;
	char c;

	a = 'A';
	c = 'C';
	if (x > 0 && y > 0)
	{
		ft_1(a, x);
		ft_2(x, y);
		if (y > 1)
		{
			ft_1(c, x);
		}
	}
}
