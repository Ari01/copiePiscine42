/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 11:57:39 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/25 14:58:22 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int ac, char **av){
	if (ac != 4)
		return (0);
	if (is_op(av[2][0]) < 0)
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	print_res(av);
	return 0;
}
