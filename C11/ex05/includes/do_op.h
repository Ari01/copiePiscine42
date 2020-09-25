/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:31:24 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/25 15:03:40 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

# define PLUS 0
# define MINUS 1
# define MUL 2
# define DIV 3
# define MOD 4

typedef int (*fptr)(int, int);

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	print_res(char **av);

int		ft_atoi(char *str);

int		is_op(char c);
int		add(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);

#endif
