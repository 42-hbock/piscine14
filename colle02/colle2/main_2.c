/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbock <hbock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 05:09:33 by hbock             #+#    #+#             */
/*   Updated: 2014/07/06 05:40:11 by hbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

t_coord			count_x_y(char *to_test)
{
	t_coord		dimensions;
	int			i;

	dimensions.x = 0;
	dimensions.y = 0;
	i = -1;
	while (to_test[++i])
	{
		if (to_test[i] == '\n' || to_test[i] == 0)
			dimensions.y++;
		if (!dimensions.y)
			dimensions.x++;
	}
	return (dimensions);
}

void			ft_put_res(char *nb_col, t_coord dim, int no_first)
{
	if (no_first)
		ft_putstr(" || ");
	ft_putstr("[colle-");
	ft_putstr(nb_col);
	ft_putstr("] [");
	ft_putnbr(dim.x);
	ft_putstr("] [");
	ft_putnbr(dim.y);
	ft_putstr("]");
}

void			print_res(t_match test, t_coord dim)
{
	int			more_one;

	more_one = 0;
	if (test.c00)
	{
		ft_put_res("00", dim, 0);
		more_one = 1;
	}
	if (test.c01)
	{
		if (more_one)
			ft_put_res("01", dim, 1);
		else 
			ft_put_res("01", dim, 0);
		more_one = 1;
	}
	if (test.c02)
	{
		if (more_one)
			ft_put_res("02", dim, 1);
		else 
			ft_put_res("02", dim, 0);
		more_one = 1;
	}
	if (test.c03)
	{
		if (more_one)
			ft_put_res("03", dim, 1);
		else 
			ft_put_res("03", dim, 0);
		more_one = 1;
	}
	if (test.c04)
	{
		if (more_one)
			ft_put_res("04", dim, 1);
		else 
			ft_put_res("04", dim, 0);
		more_one = 1;
	}
}

void			test_colles0(char *to_test)
{
	t_match		test;
	t_coord		dim;

	test.c00 = 0;
	test.c01 = 0;
	test.c02 = 0;
	test.c03 = 0;
	test.c04 = 0;
	dim = count_x_y(to_test);
	if (colle00_test(dim, to_test))
		test.c00 = 1;
	if (colle01_test(dim, to_test))
		test.c01 = 1;
	if (colle02_test(dim, to_test))
		test.c02 = 1;
	if (colle03_test(dim, to_test))
		test.c03 = 1;
	if (colle04_test(dim, to_test))
		test.c04 = 1;
	print_res(test, dim);
}

int				main()
{
	int			nread;
	char		*buf;
	char		*to_test;

	buf = (char *)malloc(sizeof(char) * 128);
	to_test = (char *)malloc(sizeof(char) * 1);
	while ((nread = read(0, buf, 128)) && (nread != -1))
	{
		if (nread == -1)
		{
			ft_putendl("reading error");
			return (0);
		}
		else
			to_test = ft_reallocat(to_test, buf);
	}
	printf("%s|||\n\n\n", to_test);
	test_colles0(to_test);
	return (0);
		
}
