/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_past_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 05:30:51 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/23 08:39:07 by mpillot          ###   ########.fr       */
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
	if (argc > 1)
		ft_putstr(argv[argc - 1]);
	if (argc < 2)
		ft_putchar('\n');
	return (0);
}
