/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:13:29 by arnaud            #+#    #+#             */
/*   Updated: 2023/03/17 15:38:58 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_pile *pile_a;
	t_pile *pile_b;
	int *tab;
	int i;
	int temp = ac - 1;
	pile_a = NULL;
	pile_b = NULL;
	i = 0;
	tab = malloc(sizeof(int) * ac);
	
	while(i != ac - 1) 
	{
		
		tab[i] = ft_atoi(av[temp--]);
		i++;
	}
	i = 0;
	while(i < ac - 1) 
	{
		push_number(&pile_a, tab[i++]);
	}

	while (pile_a != NULL)
	{
		printf("%d\n", pile_a->content);
		pile_a = pile_a ->next;
	}
	
	return(0);
}

