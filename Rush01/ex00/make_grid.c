/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:09:47 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/11 17:00:33 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	inc_asign(int grid[4][4], int constant, int roworcolumn, int inc_or_dec)
{
	int	i;

	if (inc_or_dec == 0)
	{
		i = -1;
		while (++i < 4)
		{
			if (roworcolumn == 0)
				grid[constant][i] = i + 1;
			else
				grid[i][constant] = i + 1;
		}
	}
	else
	{
		i = 4;
		while (--i > -1)
		{
			if (roworcolumn == 0)
				grid[constant][i] = 4 - i;
			else
				grid[i][constant] = 4 - i;
		}
	}
}

void	put_four(int grid[4][4], int i, int j)
{
	if (i == 0)
		grid[0][j] = 4;
	else if (i == 1)
		grid[3][j] = 4;
	else if (i == 2)
		grid[j][0] = 4;
	else
		grid[j][3] = 4;
}

void	asign(int grid[4][4], int *i, int *j, int array[4][4])
{
	if (array[*i][*j] == 1)
		put_four(grid, *i, *j);
	else if (*i == 0)
		inc_asign(grid, *j, 1, 0);
	else if (*i == 1)
		inc_asign(grid, *j, 1, 1);
	else if (*i == 2)
		inc_asign(grid, *j, 0, 0);
	else
		inc_asign(grid, *j, 0, 1);
}

void	init_grid(int array[4][4], int grid[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (array[i][j] == 4 || array[i][j] == 1)
			{
				asign(grid, &i, &j, array);
			}
		}
	}
}
