/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:16:02 by ajoliet           #+#    #+#             */
/*   Updated: 2022/09/30 14:03:58 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *first);

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char **tab;
	int x;

	(void)stack_b;
	(void)stack_a;
	tab = NULL;
	stack_a = NULL;
	if (ac > 1)
	{
		tab = create_tab(av);
		verifytab(tab);
		stack_a = lstcreate(tab);
		stack_b = NULL;
		nodoubles(stack_a);
		x = add_id(&stack_a);
		x = maxbit(x);
		if (ac == 4)
			sortthree(&stack_a);
		else if (ac == 6)
			sortfive(&stack_a, &stack_b);
		else
			ft_sort(&stack_a, &stack_b, x);
	}
	freeall(tab, &stack_a);
}

void	freeall(char **tab, t_list **main_stack_head)
{
	int i;
	t_list	*tmp;

	i = 0;
	if (tab)
	{
		while (tab[i] != NULL)
			free(tab[i++]);
//		free(tab);
	}
	if ((*main_stack_head)->next)
	{
		tmp = (*main_stack_head);
		while ((*main_stack_head)->next)
		{
			tmp = tmp->next;
			free((*main_stack_head));
			*main_stack_head = tmp;
		}
	}
}

void	print_list(t_list *first)
{
	t_list	*tmp;
	int i;

	tmp = first;
	i = 1;
	while (tmp)
	{
		printf("list n%i : nbr = %i, id = %i\n", i, tmp->nbr, tmp->id);
		tmp = tmp->next;
		i++;
	}
}
