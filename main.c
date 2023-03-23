/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:13:29 by arnaud            #+#    #+#             */
/*   Updated: 2023/03/23 13:50:12 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_pile *pile_a;
	t_pile *pile_b;
	int *tab;
	int i;
	
	i = 0;
	pile_a = NULL;
	pile_b = NULL;
	
	if (is_number(av) == 0)
		{
			tab = fill_tab(av, ac);
			if (is_double(tab) == 0 && is_max_size(tab) == 0)
			{
				while(i < ac - 1) 
				{
					push_number(&pile_a, tab[i]);
					i++;
				}
			}
		}
	
	t_pile *temp;
	temp = pile_a;
	int max = find_biggest(&pile_a);
	while (temp->next != NULL)
	{
		if (temp->content == max)
		{
			push_b(&temp, &pile_b);
		}
		temp = temp->next;
	}
	
	

	printf(" PILE A \n");
	while (pile_a != NULL)
	{
		printf("| %d |", pile_a->content);
		pile_a = pile_a ->next;
	}
	
	printf("\n PILE B \n");
	while (pile_b != NULL)
	{
		printf("| %d |", pile_b->content);
		pile_b = pile_b->next;
	}

	return(0);
}

