/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 19:13:48 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/15 19:48:43 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_max(int *tab, int size)
{
	int max;
	int count;

	count = 0;
	max = tab[count];
	while (count < size)
	{
		if (tab[count] > max)
		{
			max = tab[count];
		}
		count++;
	}
	return (max);
}


