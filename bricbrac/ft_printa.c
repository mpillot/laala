/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 03:12:29 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/23 03:38:31 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		if ((i % 2 == 0))
		{
			ft_putchar(i);
		}
		if (!(i % 2 == 0))
		{
			ft_putchar(i - 32);
		}
		i++;
	}
	return (0);
}
