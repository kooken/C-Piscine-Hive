/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:32:45 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/15 09:28:54 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		++str;
	}
}

void	ft_swap(char *a, char *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		++i;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_argv(char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc -1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(argv[j], argv[j + 1]);
			}
			++j;
		}
		++i;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_argv(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		++i;
	}
	return (0);
}
