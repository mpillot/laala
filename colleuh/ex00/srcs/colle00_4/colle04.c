/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qograbek <qograbek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 19:14:09 by qograbek          #+#    #+#             */
/*   Updated: 2015/08/23 19:14:31 by qograbek         ###   ########.fr       */
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
			ft_putchar('A');
		else if (i == x)
			ft_putchar('C');
		else
			ft_putchar('B');
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
			ft_putchar('C');
		else if (i == x)
			ft_putchar('A');
		else
			ft_putchar('B');
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
			ft_putchar('B');
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
