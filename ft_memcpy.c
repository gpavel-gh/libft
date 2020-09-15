/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 10:40:17 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/16 12:46:53 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned int	i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (!(dest) && !(src))
		return (NULL);
	while (n-- > 0)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
