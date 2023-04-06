/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:11:21 by arnaud            #+#    #+#             */
/*   Updated: 2023/04/06 15:35:27 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int tab_len(int *tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	return(i);
	
}

int	ft_mediane(int *tab)
{
	int	i;
	int size;
	int mediane;
	
	size = tab_len(tab);
	
	if (size % 2 == 0)
		mediane = size / 2;
	else if (size % 2 != 0)
	{
		i = size / 2;
		i++;
		mediane = i;
	}
	return(mediane);
}


int    lst_cont(t_pile **pile)
{
    t_pile *tmp;

    tmp = *pile;
    while (tmp->next != NULL)
        tmp = tmp->next;
    return (tmp->content);
}