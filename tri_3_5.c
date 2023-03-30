/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_3_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:26:09 by abeaudui          #+#    #+#             */
/*   Updated: 2023/03/30 14:06:55 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void tri_3(t_pile **pile_a)
{
    t_pile *tmp;
    
    tmp = *pile_a;
    if (tmp->content < tmp->next->content
        && tmp->next->content < tmp->next->next->content
        && tmp->content < tmp->next->next->content) // 123
    {
        reverse_rotate_a(pile_a);
        swap_a(pile_a);
    }
    else if (tmp->content > tmp->next->content
        && tmp->next->content < tmp->next->next->content
        && tmp->content < tmp->next->next->content) // 213
        reverse_rotate_a(pile_a);
    else if (tmp->content > tmp->next->content
        && tmp->next->content < tmp->next->next->content
        && tmp->content > tmp->next->next->content) // 312 ok
        {
            swap_a(pile_a);
        }
    else if (tmp->content < tmp->next->content
        && tmp->next->content > tmp->next->next->content
        && tmp->content < tmp->next->next->content) // 132
    {
        rotate_a(pile_a);
    }
    else if (tmp->content < tmp->next->content
        && tmp->next->content > tmp->next->next->content
        && tmp->content > tmp->next->next->content) // 231
        {
            rotate_a(pile_a);
            swap_a(pile_a);
        }
}

int tab_len(int *tab)
{
    int i;

    i = 0;
    while(tab[i])
        i++;
    return (i);
}
void tri_5(t_pile **pile_a, t_pile **pile_b, int *tab)
{
   // t_pile *temp;
    int i;
    int mid;
    t_pile *temp;
    
    temp = *pile_a;
    mid = lstsize(*pile_a) / 2;
    i = 0;
    while(i != mid)
    {
        temp = temp->next;
        i++;
    }
    int mid_content = temp->content;
    printf("mid content is %d", mid_content);
    while(lstsize(*pile_a) != 3)
    {
        if( mid_content)
            push_b(pile_a, pile_b);
        else
            rotate_a(pile_a);

    }
   // print_all(pile_a, pile_b);
    tri_3(pile_a);
    print_all(pile_a, pile_b);
    
}