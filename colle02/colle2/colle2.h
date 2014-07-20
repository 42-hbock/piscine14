/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbock <hbock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 05:09:33 by hbock             #+#    #+#             */
/*   Updated: 2014/07/06 05:40:11 by hbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	COLLE2_H
# define	COLLE2_H

# include <unistd.h>

int			s_len(char *s);
void		ft_putstr(char *s);
void		ft_putendl(char *s);
void		ft_put_match(char *colle, int x, int y);
int			colle00(int x, int y, char *colle2);
int			print(char a, char b, char c, int x, int index_c2, char *colle2);
int			ft_char_cmp(char a, char b);
void		ft_putnbr(int n);
void		ft_putchar(char c);

#endif