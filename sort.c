/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:33:27 by ajoliet           #+#    #+#             */
/*   Updated: 2022/09/26 16:25:55 by ajoliet          ###   ########.fr       */
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
	return (x);
}

int		maxbit(int nb)
{
	int i;

	i = 0;
	while (nb >> i)
			i++;
	return (i);
}
/*
void	ft_sort(t_list **stack_a, t_list **stack_b, int maxbit)
{
	int x;
	int i;
	int lstsize;

	i = 0;
	x = 0;
	lstsize = ft_lstsize(*stack_a);
	while (x <= maxbit)
	{
		while (i < lstsize)
		{
			if ((stack_a->nbr >> x) & 1)
				pb();
			else
				ra();
		}
		while (stack_b)
			pa();
		x++;
	}
}*/
