/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 22:02:49 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/27 22:38:13 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			main(int argc, char **argv)
{
	int n;

	n = 0;
	if (argc == 2)
	{
		while (argv[1][n] != '\0')
		{
			if (argv[1][n] >= 65 && argv[1][n] <= 90)
				argv[1][n] = argv[1][n] + 32;
			else if (argv[1][n] >= 97 && argv[1][n] <= 122)
				argv[1][n] = argv[1][n] - 32;
			ft_putchar(argv[1][n]);
			n++;
		}
	}
}
