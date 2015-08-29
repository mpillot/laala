/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 21:10:24 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/24 21:13:08 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i;
	char *str;

	i = 0;
	str = "hello";
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}
