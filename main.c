/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:13:29 by arnaud            #+#    #+#             */
/*   Updated: 2023/04/06 15:47:13 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_pile *pile_a;
	t_pile *pile_b;
	int *tab;
	int *second_tab;
	int i;
	
	i = 0;
	pile_a = NULL;
	pile_b = NULL;
	
	if (is_number(av) == 0 && ac > 3)
		{
				tab = fill_tab(av, ac);
			//if (is_double(tab) == 0 && is_max_size(tab) == 0)
		//	{
				while(i < ac - 1) 
				{
					push_number(&pile_a, tab[i]);
					i++;
				}
			//}
		}
	second_tab = sorted_tab(tab);	
	//algo(&pile_a, &pile_b, tab);
	add_index_a(&pile_a);
	return(0);
}

