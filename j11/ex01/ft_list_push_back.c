/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 21:56:38 by mpillot           #+#    #+#             */
/*   Updated: 2015/08/21 04:12:38 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*cacahuete;

	cacahuete = *begin_list;
	if (cacahuete != NULL)
	{
		while (cacahuete->next != NULL)
		{
			cacahuete = cacahuete->next;
		}
		cacahuete->next = ft_create_element(data);
	}
}
