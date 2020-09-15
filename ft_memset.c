/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 08:31:30 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/16 12:50:19 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptrs;

	i = 0;
	ptrs = (unsigned char *)str;
	while (i < n)
	{
		ptrs[i] = (unsigned char)c;
		i++;
	}
	return ((char *)str);
}
