/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 11:23:01 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/16 12:46:52 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*p;
	int		s;

	p = (char *)str;
	s = ft_strlen(p) + 1;
	if ((c == '\0') && (*p == '\0'))
		return ((char *)p);
	while (s-- > 0)
	{
		if (*p == c)
			return (p);
		p++;
	}
	return (0);
}
