/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:28:00 by arnaud            #+#    #+#             */
/*   Updated: 2023/03/23 17:35:04 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_a(t_pile **pile_a)
{
	printf(" PILE A \n");
	while (*pile_a != NULL)
	{
		printf("| %d |", (*pile_a) ->content);
		*pile_a = (*pile_a) ->next;
	}
	printf("\n");
}

void print_b(t_pile **pile_b)
{
	printf(" PILE B \n");
	if (*pile_b == NULL)
	{
		return ;
	}
	while (*pile_b != NULL)
	{
		printf("| %d |", (*pile_b) ->content);
		*pile_b = (*pile_b) ->next;
	}
	printf("\n");

}

void print_all(t_pile **pile_a, t_pile **pile_b)
{
	print_a(pile_a);
	print_b(pile_b);
}