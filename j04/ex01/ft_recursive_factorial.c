/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/10 23:28:33 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/11 23:08:15 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	else
		return (1);
}
