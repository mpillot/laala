/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 23:33:48 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/20 15:11:36 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int(*f)(char*))
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (*tab[i][j])
	{
		*tab[i][j] = f(*tab[i][j]);
		if (i == 1 && j == 1)
			return(1);
		i++;
		j++;
	}
	return (0);
}