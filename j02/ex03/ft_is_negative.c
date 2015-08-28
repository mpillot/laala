/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/08 03:51:14 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/08 04:47:21 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n)
{	
	if(n < 0)
	{
		ft_putchar('N');
	}

	else if(n >= 0)
	{
		ft_putchar('P');
	}
}

int main (void)
{
	ft_is_negative(-1);
	return(0);
}
