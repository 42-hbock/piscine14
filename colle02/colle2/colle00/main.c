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

void	colle(int x, int y);

int			ft_char_spe(int c)
{
	char	*ignor;
	int		i;

	ignor = "\n\v\t\r\f ";
	i = 0;
	while (i < 6)
	{
		if (ignor[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int			ft_atoi(char *str)
{
	int		r;
	int		neg;

	r = 0;
	neg = 1;
	while (ft_char_spe(*str))
	{
		str++;
	}
	while ((*str == '+' || *str == '-') && neg == 1)
	{
		if (*str == '-' || *(str + 1) == '+')
		{
			neg = -1;
			if (*(str - 1) == '+')
				str--;
		}
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		r = r * 10 + (*str) - '0';
		str++;
	}
	return (r * neg);
}

int		main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	else
		colle(ft_atoi(av[1]), ft_atoi(av[2]));
	return (0);
}
