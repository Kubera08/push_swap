/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:35:54 by arnaud            #+#    #+#             */
/*   Updated: 2023/03/23 14:52:39 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_biggest(t_pile **pile)
{
	int max;
	t_pile *temp;
	
	temp = *pile;
	max = temp->content;
	while (temp->next != NULL)
	{
		if (temp->content > max)
			max = temp->content;
		temp = temp->next;
	}
	return(max);
}

int find_smallest(t_pile **pile)
{
	int min;
	t_pile *temp;
	
	temp = *pile;
	min = temp->content;
	while (temp->next != NULL)
	{
		if (temp->content < min)
			min = temp->content;
		temp = temp->next;
	}
	return(min);
}