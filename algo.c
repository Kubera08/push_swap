/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:09:37 by abeaudui          #+#    #+#             */
/*   Updated: 2023/03/22 18:07:40 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void algo(t_pile **pile_a, t_pile **pile_b)
{
	int size;
	t_pile *temp;

	temp = *pile_a;
	
	while (temp->next != NULL)
	{
		
		temp = temp->next;
	}
	
}