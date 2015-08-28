/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/14 15:07:14 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/14 15:32:18 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_collatz_conjecture(unsigned int base)
{
	unsigned int result;

	result = 0;
	if (base == 1)
		return (0);
	if (base % 2 == 0)
	{
		result = (ft_collaz_conjecture(base / 2) + 1);
	}
	else
	{
		result = (ft_collatz_conjecture(base * 3) + 1);
	}
	return (result);
}
