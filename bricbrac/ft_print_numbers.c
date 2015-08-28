/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 13:29:23 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/17 13:33:34 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_print_numbers(void)
{
	int a = '0';
	int b = '9';

	while (a <= b)
	{
		ft_putchar(a);
		a++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
