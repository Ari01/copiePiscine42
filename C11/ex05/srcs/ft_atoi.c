/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:56:13 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/25 14:56:47 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	char	*spacestring;
	int		i;

	i = 0;
	spacestring = "\t\n\v\f\r ";
	while (spacestring[i])
	{
		if (spacestring[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	converta(char *str, int minuscount)
{
	int result;
	int j;

	j = 1;
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result += (*str - '0') * j;
		j *= 10;
		str--;
	}
	if (minuscount % 2)
		result *= -1;
	return (result);
}

int	ft_atoi(char *str)
{
	int i;
	int j;
	int minuscount;
	int index;

	i = 0;
	j = 10;
	index = 0;
	minuscount = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minuscount++;
		i++;
	}
	index = i;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (index != i)
	{
		return (converta(&str[--i], minuscount));
	}
	return (0);
}
