/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:43:47 by ajoliet           #+#    #+#             */
/*   Updated: 2022/10/03 18:30:49 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **src_head, t_list **dest_head)
{
	t_list *tmp;
	t_list	*new_head_src;
	t_list	*new_head_dest;

	new_head_src = (*src_head)->next;
	new_head_dest = (*src_head);
	tmp = *src_head;
	tmp->next = *dest_head;
	*src_head = new_head_src;
	*dest_head = new_head_dest;
//	if (!(*src_head)->next)
//		src_head = NULL;
	write(1, "pa\n", 3);
}

void	pb(t_list **src_head, t_list **dest_head)
{
	t_list *tmp;
	t_list	*new_head_src;
	t_list	*new_head_dest;

	new_head_src = (*src_head)->next;
	new_head_dest = (*src_head);
	tmp = *src_head;
	tmp->next = *dest_head;
	*src_head = new_head_src;
	*dest_head = new_head_dest;
	write(1, "pb\n", 3);
}

t_list	*ra(t_list **src_head)
{
	t_list	*tmp;
	t_list	*new_head;

	new_head = (*src_head)->next;
	tmp = (*src_head);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *src_head;
	tmp = tmp->next;
	tmp->next = NULL;
	write(1, "ra\n", 3);
	return (new_head);
}

t_list	*rb(t_list **src_head)
{
	t_list	*tmp;
	t_list	*new_head;

	new_head = (*src_head)->next;
	tmp = (*src_head);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *src_head;
	tmp = tmp->next;
	tmp->next = NULL;
	write(1, "rb\n", 3);
	return (new_head);
}

t_list	*sa(t_list **src_head)
{
	t_list	*new_head;

	new_head = (*src_head)->next;
	(*src_head)->next = new_head->next;
	new_head->next = *src_head;
	write(1, "sa\n", 3);
	return (new_head);
}
