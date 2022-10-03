/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:33:27 by ajoliet           #+#    #+#             */
/*   Updated: 2022/10/03 19:14:53 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		add_id(t_list **first)
{
	t_list *tmp;
	t_list *comp;
	int nbr;
	int max;
	int x;

	max = 0;
	comp = *first;
	while (comp)
	{
		nbr = comp->nbr;
		tmp = *first;
		x = 0;
		while (tmp)
		{
			if (tmp->nbr < nbr)
				x++;
			tmp = tmp->next;
		}
		comp->id = x;
		if (x > max)
			max = x;
		comp = comp->next;
	}
	return (max);
}

int		maxbit(int nb)
{
	int i;

	i = 0;
	while (nb >> i != 0)
		i++;
	return (i);
}

void	ft_sort(t_list **stack_a, t_list **stack_b, int maxbit)
{
	int x;
	int i;
	int lstsize;

	i = 0;
	x = 0;
	lstsize = ft_lstsize(*stack_a);
	issorted(stack_a);
	while (x < maxbit)
	{
		while (i < lstsize)
		{
			if (((*stack_a)->id >> x) & 1)
				*stack_a = ra(stack_a);
			else
				pb(stack_a, stack_b);
			i++;
		}
		while (*stack_b)
			pa(stack_b, stack_a);
		x++;
		i = 0;
	}
}

void	sortfive(t_list **src_head, t_list **stack_b)
{
	int i;

	i = -1;
	while (++i < 5)
	{
		if ((*src_head)->id < 2)
			pb(src_head, stack_b);
		else
			*src_head = ra(src_head);
	}
	if ((*src_head)->id == 0)
		*stack_b = rb(stack_b);
	sortthree(src_head);
	pa(stack_b, src_head);
	pa(stack_b, src_head);
}

void	sortthree(t_list **src_head)
{
	t_list	*tmp;
	int x;

// x est le 2e nbr
	tmp = (*src_head)->next;
	x = tmp->id;
	tmp = tmp->next;
	while ((*src_head)->id > x || x > tmp->id)
	{
		if ((*src_head)->id > tmp->id)
			*src_head = ra(src_head);
		else
	 		*src_head = sa(src_head);
		tmp = (*src_head)->next;
		x = tmp->id;
		tmp = tmp->next;
	}
}
