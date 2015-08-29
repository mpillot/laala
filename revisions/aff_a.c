/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 18:51:51 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/27 21:47:39 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			main(int argc, char **av)
{
	int		check;

	check = 0;
	if (argc == 2)
	{
		while (*av[1])
		{
			if (*av[1] == 'a' && check == 0)
			{
				ft_putchar('a');
				check = 1;
			}
			av[1]++;
		}
	}
	ft_putchar('\n');
	return (0);
}
