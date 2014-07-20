/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbock <hbock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 04:57:12 by hbock             #+#    #+#             */
/*   Updated: 2014/07/06 04:57:14 by hbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

int			colle02(int x, int y, char *to_test)
{
	int		i;
	int		index_c2;

	index_c2 = 0;
	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			if ((index_c2 = print('A', 'B', 'A', x, index_c2, to_test)) == -1)
				return (1);
		}
		else if (i == (y - 1))
		{
			if ((index_c2 = print('C', 'B', 'C', x, index_c2, to_test)) == -1)
				return (1);
		}
		else
		{
			if ((index_c2 = print('B', ' ', 'B', x, index_c2, to_test)) == -1)
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
