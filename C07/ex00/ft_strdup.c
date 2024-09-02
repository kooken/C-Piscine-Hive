/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:06:43 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/15 10:13:19 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		length;

	i = 0;
	length = 0;
	while (src[length] != '\0')
	{
		++length;
	}
	dup = (char *)malloc((length + 1) * sizeof(char));
	if (dup == 0)
		return (0);
	while (i < length)
	{
		dup[i] = src[i];
		++i;
	}
	dup[i] = '\0';
	return (dup);
}
