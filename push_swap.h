/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:32:05 by ajoliet           #+#    #+#             */
/*   Updated: 2022/10/03 17:26:10 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int nbr;
	int id;
	void	*next;
}		t_list;

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
t_list	*lstcreate(char **tab);
t_list	*ra(t_list **src_head);
t_list	*rb(t_list **src_head);
t_list	*sa(t_list **src_head);
void	ft_laststep(char *av);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_error(char **tab, t_list **stack_a);
void	nodoubles(t_list *first);
void 	verifytab(char **tab);
void	ft_sort(t_list **stack_a, t_list **stack_b, int maxbit);
void	pa(t_list **src_head, t_list **dest_head);
void	pb(t_list **src_head, t_list **dest_head);
void	sortthree(t_list **src_head);
void	sortfive(t_list **src_head, t_list **stack_b);
void	print_list(t_list *first);
void	freeall(char **tab, t_list ** mian_stack_head);
char    **create_tab(char **av);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
int		issorted(t_list **stack_a);
int		ft_lstsize(t_list *lst);
int		add_id(t_list **first);
int		verifyacav(int ac, char **av);
int		ps_atoi(char *s, char **tab, t_list **stack_a);
int		maxbit(int nb);
