/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbock <hbock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 16:32:57 by hbock             #+#    #+#             */
/*   Updated: 2014/07/20 16:32:57 by hbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

char		*ft_strcpy(char *dst, char *src)
{
	int		i;

	i = -1;
	while (src[++i])
		dst[i] = src[i];
	dst[i] = 0;
	return dst;
}

char		*ft_reallocat(char *dst, char *src)
{
	char	*tmp;
	int		len_dst;

	len_dst = s_len(dst);
	tmp = (char *)malloc(sizeof(char) * (len_dst + 1));
	tmp = ft_strcpy(tmp, dst);
	dst = (char *)malloc(sizeof(char) * (len_dst + s_len(src) + 1));
	dst = ft_strcpy(dst, tmp);
	dst = ft_strcpy(dst + len_dst, src);
	return (dst);
}
