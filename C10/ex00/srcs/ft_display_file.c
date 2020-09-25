/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:36:48 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/24 14:35:16 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

int		main(int ac, char **av)
{
	int		fd;
	int		readresult;
	char	c;

	readresult = -1;
	fd = -1;
	c = -1;
	if (ac > 2)
		ft_print_error_msg("Too many arguments.");
	else if (av[1] == NULL || av[1][0] == 0)
		ft_print_error_msg("File name missing.");
	else
	{
		if ((fd = open(av[1], O_RDONLY)) >= 0)
		{
			while ((readresult = read(fd, &c, 1)) > 0)
				write(1, &c, 1);
			if (readresult < 0)
				ft_print_error_msg("Cannot read file.");
		}
		else
			ft_print_error_msg("Cannot read file.");
	}
	close(fd);
	return (0);
}
