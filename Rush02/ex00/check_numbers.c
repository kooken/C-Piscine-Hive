/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:34:50 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/18 18:25:37 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printstr(char *c, int y)
{
	while (c[y] < '0' || c[y] > '9')
	{
		while (c[y] >= 'a' && c[y] <= 'z')
		{
			write(1, &c[y], 1);
			y++;
		}
		y++;
	}
}

int	numlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		c++;
	}
	return (c);
}

int	check_less_hundred(char *c, char **argv, int len, int *j, int i)
{
	int	dict_length;
	int	y;

	dict_length = 0;
	y = i;
	if (argv[1][*j] == c[i])
	{
		while (c[y] >= '0' && c[y] <= '9')
		{
			dict_length++; // checking length of number inside dictionary
			y++;
		}
		if ((len - *j) == dict_length) // when length of dict number and input number are equal, then we print.
		{
			if ((len - *j) == 2 && argv[1][*j] == '1') // checking teens
			{
				if (c[i] == argv[1][*j] && c[i + 1] == argv[1][*j + 1]) //if both two digits are the same
				{
					printstr(c, y);
					*j = *j + 2;
				}
			}
			else if (len == 2 && argv[1][*j] == '0') //not printing zeroes at the end of teens
				write (1, " \n", 2);
			else // checking the rest of the numbers
				printstr(c, y);
		}
	}
	return (*j);
}

void	iterate_over_dict(char *c, char **argv, int len, int j)
{
	int	i;

	while (argv[1][j])
	{
		i = 0; // iterates over dictionary
		while (c[i])
		{
			if (argv[1][j] == c[i] && (len - j) == 1)
			{
				check_less_hundred(c, argv, len, &j, i);
				write(1, " ", 1); //print space between number and hundred
				if ((len - j) == 1) // exiting the loop when printing last digit
					j++;
			}
			i++;
		}
		j++;
	}
}
