/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 08:40:18 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/28 19:49:03 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int nb;
	int i;

	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
			;
		else if ((str[i] >= '0' && str[i] <= '9'))
			nb = nb * 10 + str[i] - 48;
		else if (str[i] >= 0 && str[i] <= 127 && i != 0 && nb == 0)
			return (0);
		else
			return (nb);
		i++;
	}
	if (str[0] == '-')
		nb = nb * - 1; 
	return (nb);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
		printf("%d\n", atoi(argv[1]));
	}	
	return (0);
}
