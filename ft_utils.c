/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:39:35 by ajoliet           #+#    #+#             */
/*   Updated: 2022/10/03 17:35:32 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	int i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buff;
	int		i;
	int		y;

	if (!s1 || !s2)
		return (NULL);
	buff = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!buff)
		return (NULL);
	i = 0;
	y = 0;
	while (s1[i])
	{
		buff[i] = s1[i];
		i++;
	}
	while (s2[y])
	{
		buff[i] = s2[y];
		i++;
		y++;
	}
	buff[i] = '\0';
	return (buff);
}

void ft_error(char **tab, t_list **stack_a)
{
	freeall(tab, stack_a);
	write(2, "Error\n", 7);
	exit(1);
}

int issorted(t_list **stack_a)
{
	t_list *tmp;
	int x;

	tmp = ((*stack_a)->next);
	x = (*stack_a)->nbr;
	while (tmp)
	{
		if (tmp->nbr < x)
			return (0);
		x = tmp->nbr;
		tmp = tmp->next;
	}
	exit(0);
}
