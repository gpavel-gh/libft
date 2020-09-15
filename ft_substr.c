/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 10:02:20 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/28 11:06:41 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;

	if (!(subs = (char *)malloc(len + 1)) || !s)
		return (NULL);
	if ((unsigned int)ft_strlen((char *)s) < start)
		return (ft_strdup(""));
	i = 0;
	while (i < len)
		subs[i++] = ((char *)s)[start++];
	subs[i] = '\0';
	return (subs);
}
