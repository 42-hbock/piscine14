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

int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	else
	{
		if (colle00(4, 2, av[1]))
			ft_putstr("Ai-je une chance d'avoir plus de 0 ?");
		else
			ft_put_match("[colle-00] [", 4, 2);
		ft_putstr("\n");
	}
	return (0);
}
