/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 15:56:40 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/15 17:39:52 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char	*src)
{
	int	i;

	i = 0;
	if (dest)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
#include <unistd.h>
int		main(int ac, char **av)
{
	char	*src;
	int		i;

	i = 0;
	(void)ac;
	src = malloc(sizeof(char *) * strlen(av[1]));
	src = ft_strcpy(src, av[1]);	
	printf("%s\n", src);
	return (0);
}
