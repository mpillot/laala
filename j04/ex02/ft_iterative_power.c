/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 23:29:02 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/13 06:45:48 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int eddy;

	eddy = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = eddy * nb;
		power--;
	}
	return (nb);
}

#include <stdio.h>
int		main()
{
	printf("%d", ft_iterative_power(0, -1));
	return (0);
}
