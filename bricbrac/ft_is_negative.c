/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 13:34:12 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/17 16:42:03 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_is_negative(int n)
{

		if (n >= 0)
			write(1, "P", 1);
		else if (n < 0)
			write(1, "N", 1);
	
	return (n);
}

int		main(int argc, char **argv)
{
	ft_is_negative(*argv[1]);
	return(0);
}
