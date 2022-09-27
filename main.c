/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:16:02 by ajoliet           #+#    #+#             */
/*   Updated: 2022/09/27 17:52:28 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *first);

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char **tab;
//	int i;
	int x;

	x = 0;
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
		add_id(&stack_a);
		print_list(stack_a);
		x = maxbit(x);
		ft_sort(&stack_a, &stack_b, x);
		print_list(stack_a);
	}
//	i = 0;
//	while (tab[i] != NULL)
//			free(tab[i++]);
	free(tab);
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
