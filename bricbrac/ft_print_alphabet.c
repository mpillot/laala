/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 13:01:56 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/17 13:15:48 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_print_alphabet(void)
{
	int a  = 'a';
	int z  = 'z';
	while (a <= z)
	{
		ft_putchar(a);
		a++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_print_alphabet();
	return(0);
}
