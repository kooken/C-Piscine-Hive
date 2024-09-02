/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:37:54 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/03 18:55:16 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_zero(int x, int y)
{
	int		p;

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
	int		count;

	count = 1;
	if (y > 1)
	{
		if (x == 1)
		{	
			ft_putchar('B');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('B');
			while (count < (x - 1))
			{
				ft_putchar(' ');
				++count;
			}	
			ft_putchar('B');
			ft_putchar('\n');
		}
	}
}

void	ft_a(int x, int y)
{
	int	i;

	i = 1;
	ft_putchar('A');
	while (i < (x - 1))
	{
		ft_putchar('B');
		++i;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_c(int x, int y)
{
	int	i;

	i = 1;
	ft_putchar('C');
	while (i < (x - 1))
	{
		ft_putchar('B');
		++i;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		row;

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
