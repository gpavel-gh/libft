/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 09:17:01 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/16 12:48:28 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *str, int c, size_t cnt)
{
	unsigned int	i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)str;
	i = 0;
	while (i < cnt)
	{
		d[i] = s[i];
		if (d[i] == (unsigned char)c)
			return (((void *)d) + i + 1);
		if (i == cnt)
			return (((void *)d) + i + 1);
		i++;
	}
	return (0);
}
