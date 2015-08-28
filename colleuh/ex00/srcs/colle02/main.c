/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 14:23:43 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/23 23:40:26 by qograbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <colle-2.h>
#include <unistd.h>


int     main(int argc, char **argv)
{
	char *str;
	char c;
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	read(0, &c, 1);
	write(1, &c, 1);
	str = argv[2];
	ft_x(str);
	ft_y(str);
	ft_verif_colle_alpha(str);
	ft_verif_colle_beta(str);
	return (0);
}
