/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cedric.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 21:30:46 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/28 22:54:18 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#define ABS(X) (X < 0 ? -X : X)

void ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

char 		*ft_cedric(const char *str, unsigned int nb)
{
	int i;
	char *str2;

	i = 0;
	str2 = malloc(sizeof(char) * (strlen(str) + 1));	
	str2[i] = '\0';
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i % 2 == 0)
				str2[i] = ((str[i] - 65) + nb) % 26 + 65;
			if (i % 2 == 1)
				str2[i] = str[i] +(26 - nb % 26);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i % 2 == 0)
				str2[i] = ((str[i] - 97) + nb) % 26 + 97;
			if (i % 2 == 1)
				str2[i] = str[i] + (26 - nb % 26);
		}
		else
			str2[i] = str[i];
		i++;
	}
	return (str2);
}

int			main(void)
{
	ft_putstr(ft_cedric("aa)aa", 2));
	return (0);
}
