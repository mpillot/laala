/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_alphabet.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 13:16:23 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/17 13:29:04 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_reverse_alphabet(void)
{
	int a = 'a';
	int z = 'z';
	while (z >= a)
	{
		ft_putchar(z);
		z--;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_reverse_alphabet();
	return (0);
}
