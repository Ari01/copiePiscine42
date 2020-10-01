/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 09:57:44 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/24 18:02:33 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_print_error_msg(char *path, char *errormsg)
{
	write(2, "cat: ", 5);
	write(2, path, ft_strlen(path));
	write(2, ": ", 2);
	write(2, errormsg, ft_strlen(errormsg));
	write(2, "\n", 1);
}
