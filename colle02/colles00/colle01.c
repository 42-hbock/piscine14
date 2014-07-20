/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbock <hbock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 04:57:12 by hbock             #+#    #+#             */
/*   Updated: 2014/07/06 04:57:14 by hbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

int			print(char a, char b, char c, int x, int index_c2, char *to_test)
{
	int		i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			if (ft_char_cmp(a, to_test[index_c2]))
				return (-1);
			else
				index_c2++;
		}
		else if (i == (x - 1))
		{
			if (ft_char_cmp(c, to_test[index_c2]))
				return (-1);
			else
				index_c2++;
		}
		else
		{
			if (ft_char_cmp(b, to_test[index_c2]))
				return (-1);
			else
				index_c2++;
		}
		i++;
	}
	return (index_c2);
}

void		colle01(int x, int y, char *to_test)
{
	int		i;
	int		index_c2;

	index_c2 = 0;
	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			if ((index_c2 = print('/', '*', '\\', x, index_c2, to_test)) == -1)
				return (1);
		}
		else if (i == (y - 1))
		{
			if ((index_c2 = print('\\', '*', '/', x, index_c2, to_test)) == -1)
				return (1);
		}
		else
		{
			if ((index_c2 = print('*', ' ', '*', x, index_c2, to_test)) == -1)
				return (1);
		}
		if (x != 0)
		{
			if (to_test[index_c2 + 1])
				index_c2++;
		}
		i++;
	}
	return (0);
}
