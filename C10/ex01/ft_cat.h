/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 16:29:26 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/24 18:01:30 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

#include <string.h>
#include <unistd.h>
#include <libgen.h>
#include <sys/errno.h>
#include <fcntl.h>

int		ft_strlen(char *str);
void	ft_print_error_msg(char *path, char *errormsg);
int		ft_cat(int ac, char **av);

#endif
