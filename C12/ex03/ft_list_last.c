/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 14:40:11 by dchheang          #+#    #+#             */
/*   Updated: 2020/10/01 19:58:57 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

// ex00
t_list	*ft_create_elem(void *data)
{
	t_list *list;

	list = malloc(sizeof(t_list*));
	list->data = data;
	list->next = NULL;
	return (list);
}

// ex01
void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;

	if (!(*begin_list))
		*begin_list = ft_create_elem(data);
	else
	{
		tmp = ft_create_elem(data);
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
}

// ex02

int	ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

// ex03
t_list *ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

// ex04
void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;
	t_list *new;

	if (!(*begin_list))
		*begin_list = ft_create_elem(data);
	else
	{
		tmp = *begin_list;
		while (tmp->next)
			tmp = tmp->next;
		new = ft_create_elem(data);
		tmp->next = new;
	}
}

// ex05

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list *list;
	int i;

	i = 0;
	list = NULL;
	while (i < size)
	{
		ft_list_push_front(&list, (void*)(*strs));
		i++;
		strs++;
	}
	return (list);
}

// ex06

void	free_str(void *str)
{
	free(str);
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void*))
{
	if (begin_list)
	{
		if (begin_list->next)
			ft_list_clear(begin_list->next, free_fct);
		if (begin_list->data)
			free_fct(begin_list->data);
		free(begin_list);
	}
}

// ex07
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	i = 0;
	while (i < nbr)
	{
		if (!begin_list)
			return (NULL);
		begin_list = begin_list->next;
		i++;
	}
	if (i == nbr)
		return (begin_list);
	return (NULL);
}

// ex08
void	ft_list_reverse(t_list **begin_list)
{
	t_list *current;
	t_list *next;
	t_list *cpy = *begin_list;
	int i;
	int j;
	
	i = 0;
	if (tmp)
	{
		while (tmp->next)
		{
			tmp = tmp->next;
			i++;
		}
		while (i)
		{
			j = 0;
			current = *begin_list;
			while (j < i)
			{
				j++;
			}
			i--;
			cpy = *begin_list;
			while (cpy)
			{
				printf("%d\n", (int)cpy->data);
				cpy = cpy->next;
			}
		}
	}
}

int main()
{
	t_list *list = NULL;
	ft_list_push_back(&list, (void*)1);
	ft_list_push_back(&list, (void*)2);
	ft_list_push_back(&list, (void*)3);
	ft_list_push_back(&list, (void*)4);

	while (list)
	{
		printf("%d\n", (int)list->data);
		list = list->next;
	}
	ft_list_reverse(&list);
	while (list)
	{
		printf("%d\n", (int)list->data);
		list = list->next;
	}

	return (0);
}
