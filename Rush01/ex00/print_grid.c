/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:25:38 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/11 15:29:42 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_grid(int array[4][4])
{
	int		i;
	int		j;
	char	answer;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 3)
		{
			answer = array[i][j] + 48;
			write(1, &answer, 1);
			write(1, " ", 1);
		}
		answer = array[i][j] + 48;
		write(1, &answer, 1);
		write(1, "\n", 1);
	}
}
