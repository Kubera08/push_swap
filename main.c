/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:13:29 by arnaud            #+#    #+#             */
/*   Updated: 2023/03/30 14:11:39 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_pile *pile_a;
	t_pile *pile_b;
	t_pile *first;
	t_list *list;

1

	int i;
	
	list = malloc(sizeof(t_list));
	i = 0;
	pile_a = NULL;
	pile_b = NULL;
	
	if (is_number(av) == 0 && ac > 3)
		{
			list->tab = fill_tab(av, ac);
			//if (is_double(tab) == 0 && is_max_size(tab) == 0)
		//	{
				while(i < ac - 1) 
				{
					push_number(&pile_a, list->tab[i]);
					i++;
				}
			//}
		}
	
	list->sorted_tab = sorted_tab(list->tab);	
	
	tri_5(&pile_a, &pile_b, list->sorted_tab);
	//add_index(&pile_a, &pile_b);
	//print_all(&pile_a, &pile_b);
	
	
	return(0);
}

