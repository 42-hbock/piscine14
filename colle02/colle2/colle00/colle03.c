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

void		ft_putchar(char c);

void		print(char a, char b, char c, int x)
{
	int		i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar(a);
		else if (i == (x - 1))
			ft_putchar(c);
		else
			ft_putchar(b);
		i++;
	}
}

void		colle(int x, int y)
{
	int		i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
			print('A', 'B', 'C', x);
		else if (i == (y - 1))
			print('A', 'B', 'C', x);
		else
			print('B', ' ', 'B', x);
		if (x != 0)
			ft_putchar('\n');
		i++;
	}
}
