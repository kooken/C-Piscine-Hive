/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:22:48 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/11 18:50:41 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_grid(int array[4][4]);
void	init_grid(int array[4][4], int grid[4][4]);
int		backtracking(int grid[4][4], int array[4][4], int r, int c);
int		check_row_lr(int flag, int *attr, int grid[4][4], int array[4][4]);
int		check_col_ud(int flag, int *attr, int grid[4][4], int array[4][4]);
int		check_row_rl(int flag, int *attr, int grid[4][4], int array[4][4]);
int		check_col_du(int flag, int *attr, int grid[4][4], int array[4][4]);

int	is_valid(int grid[4][4], int array[4][4], int *attr)
{
	grid[attr[0]][attr[1]] = attr[2];
	if (check_row_lr(0, attr, grid, array) == 1)
		return (1);
	if (check_col_ud(0, attr, grid, array) == 1)
		return (1);
	if (check_row_rl(0, attr, grid, array) == 1)
		return (1);
	if (check_col_du(0, attr, grid, array) == 1)
		return (1);
	return (0);
}

int	check_condition(int array[4][4], int r, int c)
{
	if ((r == 0) && (array[0][c] == 2 || array[0][c] == 3))
		return (1);
	if ((r == 3) && (array[1][c] == 2 || array[1][c] == 3))
		return (1);
	if ((c == 0) && (array[2][r] == 2 || array[2][r] == 3))
		return (1);
	if ((c == 3) && (array[3][r] == 2 || array[3][r] == 3))
		return (1);
	return (0);
}

int	add_values(int *i, int *attr, int array[4][4], int grid[4][4])
{
	int	r;
	int	c;

	r = attr[0];
	c = attr[1];
	while (++*i < 5)
	{
		if (*i == 4 && (attr[0] == 0 || attr[1] == 0 \
					|| attr[0] == 3 || attr[1] == 3))
		{
			if (check_condition(array, r, c) == 1)
				continue ;
		}
		attr[2] = *i;
		if (is_valid(grid, array, attr) == 0)
		{
			if (backtracking(grid, array, r, c + 1) == 0)
				return (0);
			grid[r][c] = -1;
		}
		else
			grid[r][c] = -1;
	}
	return (1);
}

int	backtracking(int grid[4][4], int array[4][4], int r, int c)
{
	int	i;
	int	attr[3];

	i = 0;
	attr[0] = r;
	attr[1] = c;
	if (r == 4)
		return (0);
	else if (c == 4)
		return (backtracking(grid, array, r + 1, 0));
	else if (grid[r][c] != -1)
		return (backtracking(grid, array, r, c + 1));
	else
	{
		if (add_values(&i, attr, array, grid) == 0)
			return (0);
		else
			return (1);
	}
}

void	solve(int array[4][4])
{
	int	grid[4][4];
	int	i;
	int	j;
	int	answer;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			grid[i][j] = -1;
	}
	init_grid(array, grid);
	answer = backtracking(grid, array, 0, 0);
	if (answer == 0)
		print_grid(grid);
	else
		write(1, "Error", 5);
}
