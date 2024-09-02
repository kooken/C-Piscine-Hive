/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:37:54 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/03 19:00:39 by msazhina         ###   ########.fr       */
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
			ft_putchar('|');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('|');
			while (count < (x - 1))
			{
				ft_putchar(' ');
				++count;
			}	
			ft_putchar('|');
			ft_putchar('\n');
		}
	}
}

void	ft_a(int x, int y)
{
	int		i;

	i = 1;
	ft_putchar('o');
	while (i < (x - 1))
	{
		ft_putchar('|');
		++i;
	}
	if (x > 1)
	{
		ft_putchar('-');
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
			if (row == 1 || row == y)
			{
				ft_a(x, y);
			}
			else
			{
				ft_b(x, y);
			}
			++row;
		}
	}
}
