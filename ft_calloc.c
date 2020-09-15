/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 09:06:52 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/16 12:41:19 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int n, int c)
{
	char	*ptr;

	if (!(ptr = malloc(n * c)))
		return (NULL);
	ft_bzero(ptr, n * c);
	return ((void *)ptr);
}
