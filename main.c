/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:16:02 by ajoliet           #+#    #+#             */
/*   Updated: 2022/09/13 19:22:43 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data d;

	d.curarg = -1;
	printf("ac %d, av[1] %s, av[2] %s\n", ac, av[1], av[2]);
	printf("voici la chaine : %s\n", bigchain(av, &d));
	if (verifyacav(ac, av, &d) && ac > 2)
	{
		printf("en plus tout va bien !");
	}
}

/*
int	main(int ac, char **av)
{
	t_data d;

	d.curarg = -1;
	if (verifyacav(ac, av, &d))
	{
		d.first = ft_lstnew(ps_atoi(av[1]));
		while (av[++d.curarg])
		{
			ft_laststep(av[d.curarg], &d);
		}*/
		/*verifier avec lstsize et ac ?*/
		/*creer des listes chainnees avec chaque nbr dedans, en sachant que les parametres peuvent ne pas etre identiques entre eux*/
		/*regarder les fonctions de la libft ft_lst
	}	
	printf("ps_atoi : %d", ps_atoi(av[1]));
	return (0);
}*/
