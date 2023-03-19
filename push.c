/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:31:32 by abeaudui          #+#    #+#             */
/*   Updated: 2023/03/19 19:54:27 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_a(t_pile **pile_a, t_pile **pile_b)
{
	
	t_pile *temp;
	temp = *pile_a;
	
	while (temp->next->next != NULL)
		temp = temp->next;
	
	t_pile *second_to_last = temp;
	t_pile *last = temp->next;
	second_to_last->next = NULL;
	
	push_number(pile_b, last->content);
}