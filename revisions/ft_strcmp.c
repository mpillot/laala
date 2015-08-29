/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 16:10:04 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/28 16:57:47 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	if(s1 && s2)
	{
		if (*s1 == *s2)
			return (0);
		if (*s1 < *s2)
			return (-1);
		if (*s1 > *s2)
			return (1);
	}
	return (0);
}

void		ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = n * - 1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	if (n < 10)
		ft_putchar(n + '0');		
}

int		main(int argc, char **argv)
{
	int x;

	if (argc == 3)
	{
		x = ft_strcmp(argv[1], argv[2]);
		ft_putnbr(x);
	}
	ft_putchar('\n');
	ft_putnbr(strcmp(argv[1], argv[2]));
	return (0);
}
