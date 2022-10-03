/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:16:02 by ajoliet           #+#    #+#             */
/*   Updated: 2022/10/03 18:31:25 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char **tab;
	int x;

	tab = NULL;
	stack_a = NULL;
	if (ac > 1)
	{
		tab = create_tab(av);
		verifytab(tab);
		stack_a = lstcreate(tab);
		freeall(tab, NULL);
		stack_b = NULL;
		nodoubles(stack_a);
		x = add_id(&stack_a);
		x = maxbit(x);
		if (ft_lstsize(stack_a) == 3)
			sortthree(&stack_a);
		else if (ft_lstsize(stack_a) == 5)
			sortfive(&stack_a, &stack_b);
		else
			ft_sort(&stack_a, &stack_b, x);
	}
	freeall(NULL,  &stack_a);
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
		free(tab);
	}
	if (main_stack_head)
	{
		tmp = (*main_stack_head);
		while ((*main_stack_head))
		{
			tmp = tmp->next;
			free((*main_stack_head));
			*main_stack_head = tmp;
		}
	}
}
