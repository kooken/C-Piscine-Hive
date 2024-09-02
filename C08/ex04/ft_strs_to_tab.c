/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:58:19 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/20 10:47:40 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*ft_strcpy(char *str, int size)
{
	char	*dup;
	int		i;

	dup = NULL;
	dup = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*dup;
	int			i;

	dup = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		dup[i].size = ft_strlen(av[i]);
		dup[i].str = av[i];
		dup[i].copy = ft_strcpy(av[i], dup[i].size);
		i++;
	}
	dup[i].size = 0;
	dup[i].str = 0;
	dup[i].copy = 0;
	return (dup);
}
