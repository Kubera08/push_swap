/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:09:37 by abeaudui          #+#    #+#             */
/*   Updated: 2023/03/23 18:31:07 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort(t_pile **pile_a, t_pile **pile_b)
{
	int i;
	int mid_content;
	int last_content;

	t_pile *temp;
	t_pile *first;
	
	int compteur = 0;
	first = *pile_a;
	temp = *pile_a;
	i = lstsize(temp) / 2;
	while (i != 0)
	{
		temp = temp->next;
		i--;
	}		
	mid_content = temp->content;
	
	while (temp->next != NULL)
	{	
		compteur++;
		last_content = ft_last_content(&temp);
		if (last_content < mid_content) 
		{
			push_b(pile_a, pile_b);
			print_all(pile_a, pile_b);
		}
		
		printf("appel numero %d\n", compteur);
		printf("mid content is %d\n", mid_content);
		printf("last content is %d\n", last_content);
		printf("\n");
		
		temp = temp->next;
	}
}

int ft_last_content(t_pile **pile)
{
	t_pile *temp;
	int i;

	i = 0;
	temp = *pile;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	i = temp->content;
	return (i);
	
}










