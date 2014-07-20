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
# include <sys/types.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct		s_coord
{
	int			x;
	int			y;
}					t_coord;

typedef struct		s_match
{
	int			c00;
	int			c01;
	int			c02;
	int			c03;
	int			c04;
}					t_match;

int			s_len(char *s);
void		ft_putstr(char *s);
void		ft_putendl(char *s);
void		ft_put_match(char *colle, int x, int y);
int			print(char a, char b, char c, int x, int index_c2, char *colle2);
int			ft_char_cmp(char a, char b);
void		ft_putnbr(int n);
void		ft_putchar(char c);
char		*ft_strcpy(char *dst, char *src);
char		*ft_reallocat(char *dst, char *src);
int			colle00_test(t_coord dim, char *to_test);
int			colle01_test(t_coord dim, char *to_test);
int			colle02_test(t_coord dim, char *to_test);
int			colle03_test(t_coord dim, char *to_test);
int			colle04_test(t_coord dim, char *to_test);
int			colle00(int x, int y, char *to_test);
int			colle01(int x, int y, char *to_test);
int			colle02(int x, int y, char *to_test);
int			colle03(int x, int y, char *to_test);
int			colle04(int x, int y, char *to_test);

#endif