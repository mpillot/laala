/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 23:39:50 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/18 10:50:22 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
	{
		write(1, "0", 1);
		return (1);
	}
	else if (*s1 == *s2)
	{	
		write(1, "1", 1);
		return (match(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*' && *s1)
	{	
		write(1, "1", 1);
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	}
	else if (*s2 == '*')
	{	
		write(1, "1", 1);
		return (match(s1, s2 + 1));
	}
	return (0);
}

int		main(void)
{
	match("aaa", "*");
	return (0);
}
