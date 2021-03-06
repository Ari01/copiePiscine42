/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 20:35:29 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/24 20:59:11 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	if (!tab)
		return (0);
	while (*tab)
	{
		if (f(*tab))
			return (1);
		tab++;
	}
	return (0);
}
