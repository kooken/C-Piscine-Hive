/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:14:31 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/18 18:26:07 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "check_numbers.h"

char	*dict(void)
{
	int		fd;
	int		sz;
	char	*c;

	c = (char *)malloc(700 * sizeof(char));
	fd = open("numbers.dict", O_RDONLY);
	if (fd < 0)
	{
		write(1, "Dict Error\n", 11);
	}
	sz = read(fd, c, 700);
	c[sz] = '\0';
	return (c);
}

int	main(int argc, char **argv)
{	
	char	*c;
	int		i;
	int		len;
	int		j;
	int		dict_length;
	int		y;
	int		x;

	i = 0;
	c = dict();
	j = 0; // iterates over [argv[1]]
	len = numlen(argv[1]);
	x = len;
	while (argv[1][j])
	{	
		i = 0; // iterates over dictionary
		while (c[i]) // while it's not the end of dict
		{	
			//works fot two-digits input
			if (argv[1][j] == c[i] && (len - j) < 3) //if j index in input is equal to the i index in the dict & input is 2 digits
			{
				if (argv[1][j] != '0') // when it's not the last symbol in the input
					check_less_hundred(c, argv, len, &j, i);
				if ((len - j) == 1) // exiting the loop when printing last digit
					j++;
			}
			else if ((len - j) > 2 && c[i] == '1')
			{
				dict_length = 0;
				y = i;
				while (c[y] >= '0' && c[y] <= '9')
				{
					dict_length++;
					y++;
				}
				if ((len - j) == dict_length && argv[1][j] != '0')
				{
					x = x - 1;
					iterate_over_dict(c, argv, len - x, j);
					printstr(c, y);//print hundred 
					write (1, " ", 1); //print space between hundred and teens	
				}
			}
			i++;
		}
		j++;
	}
	return (0);
}
