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
	printf("x - %d\ny - %d\n", dim.x, dim.y);
	if (colle00_test(dim, to_test))
		test.c00 = 1;
	if (colle01_test(dim, to_test))
		test.c01 = 1;
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
			ft_putendl("reading error");
		else
			to_test = ft_reallocat(to_test, buf);
	}
	printf("%s|||\n\n\n", to_test);
	test_colles0(to_test);
	return (0);
		
}
