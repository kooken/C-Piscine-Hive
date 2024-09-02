/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:16:35 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/14 14:23:29 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	length;

	i = argc - 1;
	while (i > 0)
	{
		length = 0;
		while (argv[i][length] != '\0')
		{
			++length;
		}
		write (1, argv[i], length);
		write (1, "\n", 1);
		--i;
	}
	return (0);
}
