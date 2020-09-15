/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 08:54:06 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/16 12:45:31 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (!dest || !src)
		return (0);
	while ((src[n] != '\0' && n < (size - 1)))
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (ft_strlen(src));
}
