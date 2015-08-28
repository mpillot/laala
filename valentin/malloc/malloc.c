/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 23:14:32 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/15 23:54:30 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_malloc(int ac, char **av)
{
	char	*pikachu;
	int		i;
	(void)ac;

	i = 0;
	pikachu = malloc(sizeof(char *) * ft_strlen(av[1]) + 1); //Bonne nuit =) 
	if (pikachu == NULL)
		return (NULL);
	while (av[1][i])
	{
		pikachu[i] = av[1][i];
		i++;
	}
	pikachu[i] = '\0';
	free(pikachu);
	return (pikachu);
}
int		main(int ac, char **av)
{
	char	*pikachu;

	pikachu = ft_malloc(ac, av);
	printf("%s", pikachu);
	return (0);
}
