/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/14 15:52:21 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/14 15:54:51 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tutu;

	tutu = *******c;
	*******c = ***a;
	***a = *b;
	*b = ****d;
	****d = tutu;
}
