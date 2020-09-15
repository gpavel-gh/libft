/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 10:02:20 by gpavel            #+#    #+#             */
/*   Updated: 2020/09/15 18:39:39 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;
	int				x;

	if (( x = ft_strlen((char *)s) - start) < 0)
		return(ft_strdup(""));
	if (!s || !(subs = (char *)malloc(((int)len > x ? x : len) + 1)))
		return (NULL);
	i = 0;
	while (i < len)
		subs[i++] = ((char *)s)[start++];
	subs[i] = '\0';
	return (subs);
}

int		main()
{
	char	*str;
	char	*str2 = "1234";

	str = ft_substr(str2, 6, 5);
	printf("%s\n", str);
	return (0);
}