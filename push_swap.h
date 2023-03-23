/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:18:45 by arnaud            #+#    #+#             */
/*   Updated: 2023/03/23 16:14:27 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef struct s_pile
{
	int				content;
	int				index;
	
	struct 			s_pile *next;
	
}		t_pile;


int main(int ac, char **av);
void push_number(t_pile **first, int new_data);
int	ft_atoi(const char *str);
void swap_a(t_pile **pile);
void swap_b(t_pile **pile);
void push_a(t_pile **pile_a, t_pile **pile_b);
void push_b(t_pile **pile_a, t_pile **pile_b);
void free_list(t_pile **pile);
void ss(t_pile **pile_a, t_pile **pile_b);
void rotate(t_pile **pile);
void reverse_rotate_a(t_pile **pile);
void reverse_rotate_b(t_pile **pile);
void rrr(t_pile **pile_a, t_pile **pile_b);
int is_double(int *tab);
int is_number(char **tab);
int is_max_size(int *tab);
void sort(t_pile **pile_a, t_pile **pile_b);
int	lstsize(t_pile *pile);
int *fill_tab(char **av, int ac);
int find_smallest(t_pile **pile);
int find_biggest(t_pile **pile);
int ft_last_content(t_pile **pile);
void rotate_a(t_pile **pile);
void rotate_b(t_pile **pile);
void print_a(t_pile **pile_a);
void print_b(t_pile **pile_b);
void print_all(t_pile **pile_a, t_pile **pile_b);
void sort2(int mid_content, t_pile **pile_a, t_pile **pile_b);

#endif