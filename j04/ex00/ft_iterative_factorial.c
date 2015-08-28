/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 23:23:46 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/13 06:32:44 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		nb = 1;
	while (nb > 1)
	{
		fact = fact * (nb - 1);
		nb--;
	}
	return (fact);
}
