/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:32:05 by ajoliet           #+#    #+#             */
/*   Updated: 2022/09/12 15:37:12 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int nbr;
	struct s_list	*next;
}		t_list;

typedef struct s_data
{
	int iavf;
	int	iavs;
	int	curarg;
	char *args;
	struct s_list	*first;
}		t_data;

t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_laststep(char *av, t_data *d);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	bigchain(char **av, t_data *d);
int		verifyacav(int ac, char **av, t_data *d);
int		ps_atoi(char *s);
char	*ft_strjoin(char const *s1, char const *s2);
