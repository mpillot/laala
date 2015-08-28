/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 18:47:42 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/24 19:39:26 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else 
	{
		while (argv[1][i] == ' ')
			i++;
		while (argv[1][i] != ' ' && argv[1][i] != '\0')
		{
			ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
