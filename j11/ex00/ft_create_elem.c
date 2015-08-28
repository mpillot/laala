/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 03:21:00 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/21 03:16:14 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list		*cacahuete;

	cacahuete = (t_list *)malloc(sizeof(t_list));
	cacahuete->next = NULL;
	cacahuete->data = data;
	return (cacahuete);
}
