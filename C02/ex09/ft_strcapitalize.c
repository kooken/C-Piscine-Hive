/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:31:29 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/06 15:09:54 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] -= 32;
	while (str[i])
	{
		if ((str[i - 1] < 47) && ((str[i] >= 'a') && (str[i] <= 'z')))
			str[i] -= 32;
		i++;
	}
	return (str);
}
