/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:27:12 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/16 12:47:32 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	if (!(str = (char *)malloc((ft_strlen(s) + 1))))
		return (NULL);
	i = -1;
	while (++i < (int)ft_strlen(s))
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}
