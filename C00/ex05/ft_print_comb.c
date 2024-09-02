/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:28:51 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/02 09:44:10 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 47;
	while (++a <= 57)
	{
		b = a;
		while (++b <= 57)
		{
			c = b + 1;
			while (c <= 57)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a != 55 || b != 56 || c != 57)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				++c;
			}
		}
	}	
}
