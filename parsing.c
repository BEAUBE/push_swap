/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <ajoliet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:11:25 by ajoliet           #+#    #+#             */
/*   Updated: 2022/09/18 19:37:04 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char    **create_tab(char **av)
{  
    char    **tab;
    char    *str;
    int i;

    i = 1;
    str = ft_strjoin(av[1], " ");
    while (av[++i])
    {
        str = ft_strjoin(str, av[i]);
        str = ft_strjoin(str, " ");
    }
    tab = ft_split(str, ' ');
    free (str);
	return (tab);
}

void	verifytab(char **tab)
{
	int i;
	int	j;
	int result;

	i = 0;
	while (tab[i])
	{
		j = 0;
		if (tab[i][j] == '+' || tab[i][j] == '-')
			j++;
		while (tab[i][j] >= '0' && tab[i][j] <= '9')
			j++;
		if (tab[i][j] == '\0')
			result = ps_atoi(tab[i]);
		else
			ft_error();
		printf("arg n%i : %i\n", i, result);
		i++;
	}
}

t_list	*lstcreate(char **tab)
{
	t_list	*first;
	t_list	*tmp;
	int i;

	i = 1;
	first = malloc(sizeof(t_list));
	first->nbr = ps_atoi(tab[0]);
	first->next = NULL;
	tmp = first;
	printf("content first : %i\n", first->nbr);
	while (tab[i])
	{
		tmp->next = malloc(sizeof(t_list));
		tmp->next->next = NULL;
		tmp->next->nbr = ps_atoi(tab[i]);
		printf("content next : %i\n", tmp->next->nbr);
		tmp = tmp->next;
		i++;
	}
	return (first);
}

void	nodoubles(t_list *first)
{
	int	nbr;
	t_list	*fornbr;
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	fornbr = malloc(sizeof(t_list));
	fornbr = first;
	while (fornbr->next != NULL)
	{
		nbr = fornbr->nbr;
		printf("nbr analysé : %i, comparé à : ", nbr);
		tmp = fornbr->next;
		while (tmp->next != NULL)
		{
			printf("%i ", tmp->nbr);
			if (tmp->nbr == nbr)
				ft_error();
			tmp = tmp->next;
		}
		printf("\n");
		fornbr = fornbr->next;
	}
}

int ps_atoi(char *s)
{
    int i;
    int minus;
    long    result;

    minus = 1;
    result = 0;
    i = 0;
    if(s[i] == '-')
    {
        i++;
        minus = -1;
    }
    if (s[i] == '+')
            i++;
    while (s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + s[i] - '0';
        if (result < -2147483648 || result > 2147483647)
            ft_error();
        i++;
    }
    return(result * minus);
}
