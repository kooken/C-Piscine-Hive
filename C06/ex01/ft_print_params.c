/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:27:11 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/14 13:56:14 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	length;

	i = 1;
	while (i < argc)
	{
		length = 0;
		while (argv[i][length] != '\0')
		{
			++length;
		}
		write (1, argv[i], length);
		write (1, "\n", 1);
		++i;
	}
	return (0);
}
