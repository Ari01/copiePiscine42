/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:53:31 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/24 19:24:31 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *map;

	i = 0;
	map = NULL;
	if (tab == NULL || !length)
		return (NULL);
	if ((map = malloc(sizeof(int) * length)) == NULL)
		return (NULL);
	while (i < length)
	{
		map[i] = f(tab[i]);
		i++;
	}
	return (map);
}
