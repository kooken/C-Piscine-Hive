/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:02:02 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/15 13:20:06 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	length;
	int	i;
	int	j;

	length = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++] != '\0')
		{
			++length;
		}
		if (i < size - 1)
		{
			j = 0;
			while (sep[j++] != '\0')
			{
				++length;
			}
		}
		++i;
	}
	return (length);
}

void	concatenate_strings(char *result, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			result[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			result[c++] = sep[j++];
		++i;
	}
	result[c] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		length;

	if (size == 0)
	{
		result = malloc(1);
		if (result == 0)
			result[0] = '\0';
		return (result);
	}
	length = calculate_total_length(size, strs, sep);
	result = malloc(length + 1);
	if (result == 0)
		return (0);
	concatenate_strings(result, size, strs, sep);
	return (result);
}
