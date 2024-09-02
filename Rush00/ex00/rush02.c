/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:37:54 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/03 19:28:43 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
include "ft_putchar.c"

int	ft_check_zero(int x, int y)
{
	int	p;

	p = 0;
	if (y == 0)
	{
		return (0);
	}
	else if (x == 0)
	{
		while (p < y)
		{
			ft_putchar('\n');
			++p;
		}
		return (0);
	}
	return (1);
}

void	ft_b(int x, int y)
{
	int	count;

	count = 1;
	if (y > 1)
	{
		if (x == 1)
		{	
			ft_putchar('b');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('b');
			while (count < x - 1)
			{
				ft_putchar(' ');
				++count;
			}	
			ft_putchar('b');
			ft_putchar(' ');
		}
	}
}

void	ft_a(int x, int y)
{
	int	i;

	i = 1;
	ft_putchar('a');
	while (i < (x - 1))
	{
		ft_putchar('b');
		++i;
	}
	if (x > 1)
	{
		ft_putchar('a');
	}
	ft_putchar('\n');
}

void	ft_c(int x, int y)
{
	int	i;

	i = 1;
	ft_putchar('c');
	while (i < (x - 1))
	{
		ft_putchar('b');
		++i;
	}
	if (x > 1)
	{
		ft_putchar('c');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	if (ft_check_zero(x, y) == 1)
	{
		while (row <= y)
		{
			if (row == 1)
			{
				ft_a(x, y);
			}
			else if (row == y)
			{
				ft_c(x, y);
			}
			else
			{
				ft_b(x, y);
			}
			++row;
		}
	}
}
