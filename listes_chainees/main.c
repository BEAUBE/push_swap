#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_list
{
	int nb;
	struct s_list *next;
	struct s_list *prev;
}	t_list;

void	free_lst(t_list **lst)
{
	t_list *tmp;

	tmp = (*lst);
	while ((*lst)->next != NULL)
	{
		tmp = tmp->next;
		free((*lst));
		(*lst) = tmp;
	}
	free (*lst);
}

void	read_lst(t_list **lst)
{
	t_list *tmp;
	int	i;

	i = 0;
	tmp = (*lst);
	while (tmp-> next != NULL)
	{
		printf("%d\n", tmp->nb);
		tmp = tmp->next;
	}
	printf("%d", tmp->nb);
}

/*void	edit_lst(t_list **lst, int size)
{
	t_list *tmp;
	int	i;
	int	pos;

	i = 0;
	pos = 2;
	tmp = (*lst);
	while (tmp->next != NULL)
	{
		if (i == pos)
		{
			printf("EDIT\n");
			i++;
			if (i == size)
				break ;
			tmp = tmp->next;
		}
		printf("%d\n", tmp->nb);
		tmp = tmp->next;
		i++;
	}
	if (pos == size)
		printf("EDIT");
}*/

void	fill_lst(t_list **lst, int *tab, int size)
{
	int	i;
	t_list	*tmp;

	i = 0;
	(*lst) = malloc(sizeof(t_list));
	// have to protect malloc with other func;
	(*lst)->nb = tab[i];
	(*lst)->next = NULL;
	(*lst)->prev = NULL;
	tmp = *lst;
	i++;
	while (i < size)
	{
		tmp->next =  malloc(sizeof(t_list));
		//have to protect;
		tmp->next->nb = tab[i];
		tmp->next->next = NULL;
		tmp->next->prev = tmp;
		tmp = tmp->next;
		i++;
	}
}

int	*fill_tab(char **av, int size)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * size + 1);
	if (!tab)
		return (NULL);
	while (av[i] && size > 0)
	{
		tab[i] = atoi(av[i]);
		i++;
		size--;
	}
	return (tab);
}

int	main(int ac, char **av)
{
	t_list *lst;
	int	*tab;
	int	size;

	lst = NULL;
	tab = NULL;
	size = ac - 1;
	tab = fill_tab(av + 1, size);
	fill_lst(&lst, tab, size);
	read_lst(&lst);
	//printf("\n");
	//edit_lst(&lst, size);
	free_lst(&lst);
	free(tab);
	return (0);
}
