/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 20:00:31 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/15 20:05:55 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'z')
			ft_putchar('a');
		else
			ft_putchar(str[i] + 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		rotone(argv[1]);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
