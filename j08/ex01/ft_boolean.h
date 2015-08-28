/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 23:40:51 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/23 02:14:11 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

void		ft_putstr(char *str);
# define EVEN_MSG "I have a pair number of arguments.\n"
# define ODD_MSG "I have an impair number of arguments.\n"
# define SUCCESS 0
# define TRUE 0
# define FALSE 1
# define EVEN(nbr) nbr % 2 == 0

typedef int		t_bool;

#endif
