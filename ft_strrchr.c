/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 11:51:22 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/16 12:51:16 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s;

	i = 0;
	s = (char*)str;
	if ((c == '\0') && (s[i] == '\0'))
		return ((char *)s);
	i = ft_strlen(s);
	while (i != 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
		if (s[i] == c)
			return ((char *)s + i);
	}
	return (0);
}
