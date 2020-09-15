/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:20:39 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/28 11:38:51 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set_s(const char c, char *set)
{
	int		n;

	n = 0;
	while (set[n] != '\0')
	{
		if (c == set[n])
			return (1);
		n++;
	}
	return (0);
}

char		*ft_strtrim(const char *s1, const char *set)
{
	int		s1len;
	int		i;

	if (!s1)
		return (NULL);
	s1len = ft_strlen(s1);
	i = 0;
	while ((s1[i] != '\0') && (check_set_s(s1[i], (char *)set)))
		i++;
	if (i >= s1len)
		return (ft_substr(s1, 0, (0)));
	while ((check_set_s(s1[s1len - 1], (char *)set)))
		s1len--;
	return (ft_substr(s1, i, (s1len - i)));
}
