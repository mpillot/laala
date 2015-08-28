/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbeaujou <hbeaujou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/08 12:55:15 by hbeaujou          #+#    #+#             */
/*   Updated: 2015/08/23 19:03:27 by qograbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	dessineligne(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('o');
		else if (i == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	dessinederniereligne(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('o');
		else if (i == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	dessinelignevide(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
}

void	dessine(int x, int y, int i)
{
	i = 1;
	while (i <= y)
	{
		if (i == 1)
		{
			dessineligne(x);
			ft_putchar('\n');
		}
		else if (i == y)
		{
			dessinederniereligne(x);
			ft_putchar('\n');
		}
		else
		{
			dessinelignevide(x);
			ft_putchar('\n');
		}
		i++;
	}
}

void	colle(int x, int y)
{
	int i;
	
	i = 0;
	if (x <= 0 || y <= 0)
	{
	}
	else
	{
		dessine(x, y, i);
	}
}
