/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 16:18:11 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/24 17:10:40 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	ft_cat(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		
		if (basename(av[i]) == NULL)
		{
			ft_print_error_msg(strerror(errno));
			return (1);
		}
	//	if (basename(av[i]))
	}
	return (0);
}
