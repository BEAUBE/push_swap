/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_chain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <ajoliet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:11:25 by ajoliet           #+#    #+#             */
/*   Updated: 2022/09/13 20:10:16 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char    *bigchain(char **av, t_data *d)
{   
    int i;

    i = 2;
	if (!av[2])
		return (av[1]);
    d->chain = ft_strjoin(av[1], " ");
    d->chain = ft_strjoin(d->chain,  av[2]);
    d->chain = ft_strjoin(d->chain,  " ");
    while (av[++i])
    {
        d->chain = ft_strjoin(d->chain, av[i]);
        d->chain = ft_strjoin(d->chain, " ");
    }
	return (d->chain);
}
