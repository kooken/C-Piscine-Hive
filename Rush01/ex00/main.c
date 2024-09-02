/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:32:05 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/11 18:50:04 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	solve(int array[4][4]);

void	initialize(char *str, int *attr, int array[4][4])
{
	if (attr[1] == 4)
	{
		attr[1] = 0;
		attr[2] += 1;
	}
	array[attr[2]][attr[1]] = str[attr[0]] - 48;
	++attr[1];
	++attr[0];
}

int	input_to_array(char *str, int *attr, int array[4][4])
{
	int	flag;

	flag = 1;
	while (str[attr[0]] != '\0')
	{
		if (str[attr[0]] >= '1' && str[attr[0]] <= '4')
		{
			if (flag == 0)
			{
				write(1, "Error", 5);
				return (1);
			}
			initialize(str, attr, array);
			flag = 0;
		}
		else if (str[attr[0]] == ' ')
		{
			flag = 1;
			++attr[0];
		}
		else
		{
			write(1, "Error", 5);
			return (1);
		}
	}
	if (attr[0] >= 32)
	{
		write(1, "Error", 5);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	array[4][4];
	int	attr[3];

	if (argc == 2)
	{
		i = -1;
		while (i++ < 3)
			attr[i] = 0;
		array[3][3] = -1;
		if (input_to_array(argv[1], attr, array) == 1)
			return (0);
		if (array[3][3] == -1)
			write(1, "Error", 5);
		if (array[3][3] == -1)
			return (0);
		solve(array);
	}
	else
		write(1, "Error", 5);
	return (0);
}
