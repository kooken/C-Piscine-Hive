/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:13:44 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/15 10:20:32 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (range == 0)
	{
		return (0);
	}
	while (i < size)
	{
		range[i] = min + i;
		++i;
	}
	return (range);
}
