/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 04:58:56 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/25 05:18:17 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int cmp;

	cmp = 0;
	while (str[cmp] != '\0')
	{
		cmp++;
	}
	return (cmp);
}

int		main(int argc, char **argv)
{
	int i;

	i = ft_strlen(argv[1]);
	printf("%d", i);
	return (0);	
}
