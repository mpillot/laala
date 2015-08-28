/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 04:38:13 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/13 06:20:43 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	int		c;

	c = nb;

	if (nb < 0 || nb < 13)
	{
		return(0);
	}
	if (nb == 0)
	{
		return(1);
	}
	if (nb > 0)
	{
		power = (ft_recursive_power(nb - 1);
	}
	return(nb);
}

int		main(void)
{
	printf("%d", ft_recursive_power(6));
}

