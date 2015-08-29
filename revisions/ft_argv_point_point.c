/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argv_point_point.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 02:21:11 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/26 05:54:35 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char		*ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

#include <stdio.h>

int		main(int argc, char **argv)
{
	(void)argc;
	char **tab;
	int i;
	int cntLines;
	int d;

	i = 0;
	d = 1;
	cntLines = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '\n')
			cntLines++;
		i++;
	}
	tab = (char **)malloc(sizeof(char *) * (cntLines + 1));
	tab[cntLines] = NULL;
	i = 0;
	cntLines = 0;
	while (argv[1][i])
	{
		while (argv[1][i + d] != '\n' && argv[1][i + d])
			d++;
		tab[cntLines] = (char*)malloc(sizeof(char) * (d + 1));
		ft_strncpy(tab[cntLines], &argv[1][i], d);
		ft_putstr(tab[cntLines]);
		i += d;
		d = 1;
		cntLines++;
		//printf("%d\n", cntLines++);
	}
	return (0);
}
