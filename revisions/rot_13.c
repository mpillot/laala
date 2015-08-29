/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 17:09:27 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/29 00:01:15 by mpillot          ###   ########.fr       */
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
		write(1, &str[i], 1);
		i++;
	}
}

int			main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][j] != '\0')
		{
			if ((argv[1][j] >= 65 && argv[1][j] <= 90) || (argv[1][j] >= 97 && argv[1][j] <= 122))
			{
				while (i < 13)
				{
					if (argv[1][j] == 'Z')
					{
						argv[1][j] = 'A';
						i++;
					}
					if (argv[1][j] == 'z')
					{
						argv[1][j] = 'a';
						i++;
					}
					argv[1][j] = argv[1][j] + 1;
					i++;
				}
				i = 0;
			}
			j++;
		}
		ft_putstr(argv[1]);
	}
	ft_putstr("\n");
	return (0);
}
