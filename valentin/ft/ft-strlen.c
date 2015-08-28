/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 11:25:15 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/21 03:12:27 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strdup(char *str)
{
	int c;
	char *nouv;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	c = 0;
	while (str[c] !=  '\0')
	{
		nouv[c] = str[c];
		c++;
	}
	nouv[c] = '\0';
	return (nouv); 
}

int		main()
{
	printf("%d", ft_strlen("rhjfjkdf"));
	return (0);	
}
