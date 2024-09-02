/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_numbers.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:54:56 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/18 18:27:03 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_NUMBERS_H
# define CHECK_NUMBERS_H

void	printstr(char *c, int y);
int		check_less_hundred(char *c, char **argv, int len, int *j, int i);
void	iterate_over_dict(char *c, char **argv, int len, int j);
int		numlen(char *str);

#endif
