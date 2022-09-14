/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:19:22 by ajoliet           #+#    #+#             */
/*   Updated: 2022/09/13 19:15:09 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*creer struct, mettre nb dedans, mettre le tout dans la liste, renvoie rien pour le moment*/
/*void	ft_laststep(char *av, t_data *d)
{
	t_list	new;

	new.nbr = ps_atoi(av);
	ft_lstadd_back(&d->first, &new);
}
*/

int	ps_atoi(char *s)
{
	int	i;
	int	minus;
	long	result;
	
	minus = -1;
	result = 0;
	i = -1;
	if(s[i] == '-')
	{
		i++;
		minus = -minus;
	}
	while (s[++i] >= '0' && s[i] <= '9')
		result = minus * result * 10 + s[i] - '0';
//	if (result < -2147483648 || result > 2147483647)
	return (result);
}
/*mettre dans le main une ft pour savoir si on est au dela des itn*/
int	verifyacav(int ac, char **av, t_data *d)
{
	d->iavf = 0;
	if (ac == 1)
		return (0);
	else while (av[++d->iavf])
	{
		d->iavs = -1;
		while (av[d->iavf][++d->iavs] != '\0')
		{
			if ((av[d->iavf][d->iavs] < '0' && av[d->iavf][d->iavs] > '9') ||
				av[d->iavf][d->iavs] == '-' || av[d->iavf][d->iavs] == ' ' ||
				av[d->iavf][d->iavs] == '+')
					return (0);
		}
	}
	return (1);
	d->iavf = 0;
	d->iavs = 0;
}
