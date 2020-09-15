/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 09:42:32 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/24 08:47:45 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	z;

	x = ft_strlen(dst);
	y = 0;
	z = ft_strlen(src) + (size <= x ? size : x);
	if (size == 0)
		return (z);
	while (src[y] != '\0' && x < (size - 1))
	{
		dst[x] = src[y];
		y++;
		x++;
	}
	if (x < size)
		dst[x] = '\0';
	return (z);
}
