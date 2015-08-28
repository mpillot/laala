/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   petpet.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 18:21:46 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/15 23:03:55 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar(' ');
		i++;
	}
	return (0);
}
