/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/12 10:45:41 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/12 10:45:49 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcpy(char *dest, char *src)

{
	int		v;

	v = 0;
	while (src[v] != '\0')
	{
		dest[v] = src[v];
		v++;
	}
	dest[v] = '\0';
	return (0);
}