/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:51:08 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/05 12:33:14 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	i;

	count = 0;
	while (count < size / 2)
	{
		i = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = i;
		++count;
	}
}
