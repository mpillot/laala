/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grille_initiale.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerniss <rmerniss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 17:17:13 by rmerniss          #+#    #+#             */
/*   Updated: 2015/08/16 22:43:53 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	grille_initiale(int argc, char **argv)
{
	int row;
	int col;
	int grille[9][9];
	
	row = 0;
	col = 0;
	while (row <= 8)
	{
		while (col <= 8)
		{
			grille[row][col] = argv[row + 1][col];
			if (argv[row + 1][col] == '.')
					grille[row][col] = '0';
			col = col + 1;
			ft_putchar(grille[row][col]);
			if (row < 8)
				ft_putchar('\n');
		}
		row++;
	}
}

int		main(int argc, char **argv)
{
	grille_initiale(argc, argv);
	is_initial_valid(argc, argv);
	return (0);
}
