/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:09:37 by abeaudui          #+#    #+#             */
/*   Updated: 2023/03/25 13:43:06 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort2(t_pile **pile_a, t_pile **pile_b, int mid_content)
{
	t_pile *temp;
	
	temp = *pile_a;
	while (temp->next != NULL)
		temp = temp->next;
	if (mid_content > temp->content)
		push_b(pile_a, pile_b);
	else if(mid_content > (*pile_a)->content)
	{
		rotate_a(pile_a);
		push_b(pile_a, pile_b);
	}
	else
		rotate_a(pile_a);
}

int is_sorted(t_pile **pile_a, int nb)
{
	t_pile *temp;
	
	temp = *pile_a;
	while (temp->next != NULL)
	{
		if(temp->content < nb)
			return(1);
		temp = temp->next;
	}
	return (0);
}

t_pile *find_adress(t_pile **pile_a, int mid)
{
	t_pile *temp;
	
	temp = *pile_a;
	while (temp->content != mid)
		temp = temp->next;
	return (temp);
}
void sort(t_pile **pile_a, t_pile **pile_b)
{
	int i;
	int mid_content;

	t_pile *temp;
	t_pile *first;
	
	temp = *pile_a;
	i = lstsize(temp) / 2;
	while (i != 0)
	{
		temp = temp->next;
		i--;
	}		
	mid_content = temp->content;
	if(is_sorted(pile_a, mid_content) == 0)
		rotate_a(pile_a);
	while (find_adress(pile_a, mid_content) != NULL && is_sorted(pile_a, mid_content) != 0) // tant que le mid n'est pas le dernier element et qu'il ne reste pas d'élément inférieur au mid
	{
			sort2(pile_a, pile_b, mid_content);
	}

}












