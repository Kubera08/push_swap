/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:09:37 by abeaudui          #+#    #+#             */
/*   Updated: 2023/03/22 15:54:58 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void algo(t_pile **pile_a, t_pile **pile_b)
{
	int size;
	int mid;
	t_pile *temp;

	temp = *pile_a;
	size = lstsize(temp) / 2;

	while (size != 0)
	{
		size--;
		temp = temp->next;
	}
	mid = temp->content;
	printf("%d", mid);
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	
	
}