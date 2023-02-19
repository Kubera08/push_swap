/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:17:30 by arnaud            #+#    #+#             */
/*   Updated: 2023/02/18 17:05:10 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*

void view(pile *pile_a)
{
        while(pile_a)
          {
             printf("%d\n",pile_a->content);
             pile_a = pile_a->pos;
          }
}

*/

int last_param(int ac, char **av)
{
	int i;
		
	i = 0;
	while (i < ac - 1)
	{
		i++;
	}
	return(i - 1);
}

void ft_fill(int ac, char **av, pile pile_a)
{
	int i;
	int pos;
	int content;

	
	pos = last_param(ac, av) + 1;
	i = 0;
	content = 0;

	while(i < ac - 1)
	{
		content = ft_atoi(av[pos--]);
		ft_lstadd_back(&pile_a, (ft_lstnew(content)));
		i++;
	}
	
	
}


