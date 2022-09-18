/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:16:02 by ajoliet           #+#    #+#             */
/*   Updated: 2022/09/18 17:22:04 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char **tab;
	t_list	*first;

	if (ac > 1)
	{
		tab = create_tab(av);
		verifytab(tab);
		first = lstcreate(tab);
		nodoubles(first);
	}
}
