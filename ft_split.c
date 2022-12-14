/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 21:28:57 by ajoliet           #+#    #+#             */
/*   Updated: 2022/04/18 16:42:32 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**walloc_tab(const char *s, char c)
{
	int		i;
	int		count;
	char	**buff;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	buff = malloc(sizeof(char *) * (count + 1));
	if (!buff)
		return (NULL);
	return (buff);
}

char	**lalloc_tab(char **buff, const char *s, char c)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count = 0;
			while (s[i] != c && s[i])
			{
				count++;
				i++;
			}
			buff[j] = malloc(sizeof(char) * count + 1);
			if (!buff[j])
				return (NULL);
			j++;
		}
		else
			i++;
	}
	return (buff);
}

char	**fill_tab(char **buff, const char *s, char c)
{
	int		i;
	int		y;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			y = 0;
			while (s[i] != c && s[i])
			{
				buff[j][y] = s[i];
				i++;
				y++;
			}
			buff[j][y] = '\0';
			j++;
		}
		else
			i++;
	}
	buff[j] = NULL;
	return (buff);
}

char	**ft_split(char const *s, char c)
{
	char	**buff;

	if (!s)
		return (NULL);
	buff = walloc_tab(s, c);
	if (!buff)
		return (NULL);
	buff = lalloc_tab(buff, s, c);
	if (!buff)
		return (NULL);
	fill_tab(buff, s, c);
	return (buff);
}
