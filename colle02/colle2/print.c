/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbock <hbock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 05:09:33 by hbock             #+#    #+#             */
/*   Updated: 2014/07/06 05:40:11 by hbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

int			s_len(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void		ft_putstr(char *s)
{
	write(1, s, s_len(s));
}

void		ft_putendl(char *s)
{
	ft_putstr(s);
	write(1, "\n", 1);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int n)
{
	if (n >= 10)
   	{
    	ft_putnbr(n / 10);
    	ft_putnbr(n % 10);
    }
	else
		ft_putchar('0' + n);
}