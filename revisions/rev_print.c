/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 15:04:43 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/28 19:44:03 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			i++;
		}
		i--;
		while (argv[1][i])
		{
			ft_putchar(argv[1][i]);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
