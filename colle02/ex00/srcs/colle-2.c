/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 14:13:11 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/23 14:37:52 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "colle-2.h"
#include <unistd.h>

int		ft_x(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\n')
	{
		x++;
	}
	ft_putnbr(str);
	return (x);
}

int		ft_y(char *str)
{
	int cpt;
	int y;

	cpt = 0;
	y = 0;
	while (str[cpt] != '\0')
	{
		if(str[cpt] == '\n')
			y++;
		cpt++;
	}
	ft_putnbr(str);
	return (y);
}

int ft_verif_colle_alpha(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		if (str[cpt] == '\n' && str[cpt - 1] != 'C')
		{
			write(1, "Colle02\n", 8);
			return (0);
		}
		else if (str[cpt + 1] == '\0' && str[cpt] == 'C')
		{
			write(1, "Colle03\n", 8);
			return (0);
		}
		else if (str[cpt + 1] == '\0' && str[cpt] == 'A')
		{
			write(1, "Colle04\n", 8);
			return (0);
		}
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
		cpt++;
	}
	return (0);

}

int		ft_verif_colle(char *str)
{
	int cpt;
	cpt = 0;
	if (str[cpt] == 'o')
	{
		write(1, "Colle00\n", 8);
		return (0);
	}
	if (str[cpt] == '/')
	{
		write(1, "Colle01\n", 8);
		return (0);
	}
	ft_verif_colle_alpha(str);
	return (0);
}
