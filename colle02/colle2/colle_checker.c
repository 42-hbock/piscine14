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
//ft_put_match("[colle-00] [", dim.x, dim.y);

int		colle01_test(t_coord dim, char *to_test)
{
	if (colle00(dim.x, dim.y, to_test))
		return (0);
	else
		return (1);
}