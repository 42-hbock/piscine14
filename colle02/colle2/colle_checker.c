/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbock <hbock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 18:01:13 by hbock             #+#    #+#             */
/*   Updated: 2014/07/20 18:01:14 by hbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

int		colle00_test(t_coord dim, char *to_test)
{
	if (colle00(dim.x, dim.y, to_test))
		return (0);
	else
		return (1);
}

int		colle01_test(t_coord dim, char *to_test)
{
	if (colle01(dim.x, dim.y, to_test))
		return (0);
	else
		return (1);
}

int		colle02_test(t_coord dim, char *to_test)
{
	if (colle02(dim.x, dim.y, to_test))
		return (0);
	else
		return (1);
}

int		colle03_test(t_coord dim, char *to_test)
{
	if (colle03(dim.x, dim.y, to_test))
		return (0);
	else
		return (1);
}

int		colle04_test(t_coord dim, char *to_test)
{
	if (colle04(dim.x, dim.y, to_test))
		return (0);
	else
		return (1);
}
