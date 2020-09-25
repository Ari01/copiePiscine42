/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 10:18:48 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/25 11:56:37 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int j;

	i = 0;
	if (!tab)
		return (1);
	while (i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if (f(tab[i], tab[j]) > 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
