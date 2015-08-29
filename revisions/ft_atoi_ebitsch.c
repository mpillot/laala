/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ebitsch.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 19:49:49 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/28 19:53:31 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int j;
	int nb;

	i = 0;
	j = 0;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	return (j ? -nb : nb);
}

int			main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
