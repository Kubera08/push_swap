/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:13:29 by arnaud            #+#    #+#             */
/*   Updated: 2023/02/18 16:56:44 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	pile *pile_a;
	pile *pile_b;

	pile_a = NULL;
	pile_b = NULL;
	
	printf("%p", pile_a);
	ft_fill(ac,av, *pile_a);
	
	// view(pile_a);
	/*
	
	if(ac < 3)
		return(1);
	if (check(pile_a) == 0)
	{
		ft_fill(ac, av, &pile_a);
	}
	*/
	return(0);
	
}

