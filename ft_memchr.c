/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:44:06 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/16 12:45:52 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	c2;
	int				i;

	s = (unsigned char *)src;
	c2 = (unsigned char)c;
	i = 0;
	while (n-- > 0)
	{
		if (s[i] == c2)
			return ((void *)src + i);
		i++;
	}
	return (0);
}
