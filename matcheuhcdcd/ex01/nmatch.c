/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 22:59:27 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/18 13:47:44 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	else if (*s2 == '*' && *s1)
		return (match(s1, s2 + 1) + match(s1 + 1, s2));
	else if (*s2 == '*')
		return (match(s1, s2 + 1));
	else
		return (0);
}

int		main(int argc, char**argv)
{
	argc = 1;
	printf("%d", match(argv[1], argv[2]));
	return (0);
}
