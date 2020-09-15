/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 10:56:39 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/16 12:43:15 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*destino;
	unsigned char	*origen;

	i = 0;
	destino = (unsigned char *)dest;
	origen = (unsigned char *)src;
	if (origen < destino)
	{
		while ((int)(--n) >= 0)
			destino[n] = origen[n];
	}
	if (origen > destino)
	{
		while (n-- > 0)
			*(destino++) = *(origen++);
	}
	return (dest);
}
