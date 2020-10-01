/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:52:52 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/25 14:57:40 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	ft_putnbr(int nb)
{
	unsigned int	unb;

	unb = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		unb = -nb;
	}
	if (!(nb / 10))
		ft_putchar(unb + '0');
	else
	{
		ft_putnbr(unb / 10);
		ft_putchar('0' + unb % 10);
	}
}

int	is_op(char c)
{
	if (c == '+')
		return (PLUS);
	if (c == '-')
		return (MINUS);
	if (c == '*')
		return (MUL);
	if (c == '/')
		return (DIV);
	if (c == '%')
		return (MOD);
	return (-1);
}

void	print_res(char **av)
{
	int left_operande;
	int right_operande;
	fptr f[5];
	int operator;

	left_operande = ft_atoi(av[1]);
	right_operande = ft_atoi(av[3]);
	operator = is_op(av[2][0]);
	f[PLUS] = &add;
	f[MINUS] = &sub;
	f[MUL] = &mul;
	f[DIV] = &div;
	f[MOD] = &mod;
	if (operator == DIV && !right_operande)
		ft_putstr("Stop : division by zero");
	else if (operator == MOD && !right_operande)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr((*(f[operator]))(left_operande, right_operande));
	ft_putchar('\n');
}
