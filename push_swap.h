/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:32:05 by ajoliet           #+#    #+#             */
/*   Updated: 2022/09/18 18:42:57 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int nbr;
	struct s_list	*next;
}		t_list;

t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
t_list	*lstcreate(char **tab);
void	ft_laststep(char *av);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_error(void);
void	nodoubles(t_list *first);
void 	verifytab(char **tab);
char    **create_tab(char **av);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
int		verifyacav(int ac, char **av);
int		ps_atoi(char *s);
