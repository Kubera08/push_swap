/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:09:37 by abeaudui          #+#    #+#             */
/*   Updated: 2023/03/30 17:58:07 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void algo(t_pile **pile_a, t_pile **pile_b, int *tab)
{
	if(lstsize(*pile_a) ==  3)
		{
			tri_3(pile_a);
			print_all(pile_a, pile_b);
		}
	else if(lstsize(*pile_a) == 4)
		{
			tri_4(pile_a, pile_b, tab);
			print_all(pile_a, pile_b);

		}	
	else if(lstsize(*pile_a) == 5)
		{
			tri_5(pile_a, pile_b, tab);
			print_all(pile_a, pile_b);

		}	
	else
		printf(" att un peu chef j'y travaille\n");
	
}












