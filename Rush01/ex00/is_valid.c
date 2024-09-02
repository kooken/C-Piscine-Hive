/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:32:11 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/11 16:55:27 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_row_lr(int flag, int *attr, int grid[4][4], int array[4][4])
{
	int	i;
	int	max_height;
	int	visible_count;

	i = -1;
	max_height = 0;
	visible_count = 0;
	while (++i < 4)
	{
		if (attr[2] == grid[attr[0]][i] && i != attr[1])
			return (1);
		if (grid[attr[0]][i] > max_height)
		{
			max_height = grid[attr[0]][i];
			++visible_count;
		}
		if (grid[attr[0]][i] == -1)
			flag = 1;
	}
	if (flag == 0 && visible_count > array[2][attr[0]])
		return (1);
	if (flag == 0 && visible_count != array[2][attr[0]])
		return (1);
	return (0);
}

int	check_col_ud(int flag, int *attr, int grid[4][4], int array[4][4])
{
	int	i;
	int	max_height;
	int	visible_count;

	i = -1;
	max_height = 0;
	visible_count = 0;
	while (++i < 4)
	{
		if (attr[2] == grid[i][attr[1]] && i != attr[0])
			return (1);
		if (grid[i][attr[1]] > max_height)
		{
			max_height = grid[i][attr[1]];
			++visible_count;
		}
		if (grid[i][attr[1]] == -1)
			flag = 1;
	}
	if (flag == 0 && visible_count > array[0][attr[1]])
		return (1);
	if (flag == 0 && visible_count != array[0][attr[1]])
		return (1);
	return (0);
}

int	check_row_rl(int flag, int *attr, int grid[4][4], int array[4][4])
{
	int	i;
	int	max_height;
	int	visible_count;

	i = 4;
	max_height = 0;
	visible_count = 0;
	while (--i > -1)
	{
		if (grid[attr[0]][i] > max_height)
		{
			max_height = grid[attr[0]][i];
			++visible_count;
		}
		if (grid[attr[0]][i] == -1)
			flag = 1;
	}
	if (flag == 0 && visible_count > array[3][attr[0]])
		return (1);
	if (flag == 0 && visible_count != array[3][attr[0]])
		return (1);
	return (0);
}

int	check_col_du(int flag, int *attr, int grid[4][4], int array[4][4])
{
	int	i;
	int	max_height;
	int	visible_count;

	i = 4;
	max_height = 0;
	visible_count = 0;
	while (--i > -1)
	{
		if (grid[i][attr[1]] > max_height)
		{
			max_height = grid[i][attr[1]];
			++visible_count;
		}
		if (grid[i][attr[1]] == -1)
			flag = 1;
	}
	if (flag == 0 && visible_count > array[1][attr[1]])
		return (1);
	if (flag == 0 && visible_count != array[1][attr[1]])
		return (1);
	return (0);
}
