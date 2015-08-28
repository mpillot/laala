/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/07 06:28:54 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/16 06:41:19 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{ 
	char na;
	na = '0';
	while (na < '9')
	{
		ft_putchar(na);
		na++;
	}
}

int main (void)
{
	ft_print_numbers();
	return (0);
}
