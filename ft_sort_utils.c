/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:43:47 by ajoliet           #+#    #+#             */
/*   Updated: 2022/09/26 18:03:38 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*copier le pointeur src dans un tmp
changer le pointeur src au 2e de la liste
faire pointer tmp sur le premier de dest
changer dest en tmp*/
/*
void	pa(t_list **src_head, t_list **dest_head)
{
	t_list *tmp;

	tmp = *src_head;
	*src_head = (*src_head)->next;
	dest_head = &tmp;
}

void	pb(t_list **src_head, t_list **dest_head)
{
	t_list *tmp;

	*tmp = *src_head;
	*src_head = *src_head->next;
	*dest_head = *tmp;
}
*/
// a finir et a desiner surtout
void	ra(t_list **src_head)
{
	t_list *tmp;
	t_list *element;

	element = *src_head;
	tmp = *src_head;
	src_head = (*src_head)->next;
	while (tmp->next)
		tmp = tmp->next;
	element->next = NULL;
	tmp->next = &element;
	write(1, "ra\n", 3);
}
