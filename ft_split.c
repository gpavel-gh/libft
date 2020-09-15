/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:28:23 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/16 12:48:42 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ef_num_str(char *s, char c)
{
	int		i;
	int		n;
	int		n_str;

	n_str = 0;
	i = -1;
	n = 0;
	if (*s == '\0')
		return (0);
	while (s[++i] != '\0')
	{
		if (s[i] == c)
			n = 0;
		else if (n++ == 0)
			n_str++;
	}
	return (n_str);
}

static char		**ef_passvalue(char **dest, char *s, char c, int n_str)
{
	int		j;
	int		n;
	int		size;

	j = 0;
	n = -1;
	while (j < n_str)
	{
		if (s[++n] != c)
		{
			size = 0;
			while (s[n] != '\0' && s[n] != c)
				dest[j][size++] = s[n++];
			dest[j][size] = '\0';
			j++;
		}
	}
	dest[j] = NULL;
	return (dest);
}

static char		**ef_free(char **dest, int i)
{
	while (--i >= 0)
		free(dest[i]);
	free(dest);
	return (dest);
}

static char		**ef_set_str(char **dest, char *s, char c, int n_str)
{
	int		j;
	int		n;
	int		size;

	j = 0;
	n = -1;
	while (j < n_str)
	{
		if (s[++n] != c)
		{
			size = 0;
			while (s[n + size] != '\0' && s[n + size] != c)
				size++;
			dest[j] = (char *)malloc(sizeof(char *) * size + 1);
			if (!dest[j])
				ef_free(dest, j);
			n += size;
			j++;
		}
	}
	dest = ef_passvalue(dest, s, c, n_str);
	return (dest);
}

char			**ft_split(const char *s, char c)
{
	char	**dest;
	int		n_str;

	if (!s)
		return (NULL);
	n_str = ef_num_str((char *)s, c);
	dest = (char **)malloc(sizeof(char *) * (n_str + 1));
	if (!(dest))
		return (dest);
	dest = ef_set_str(dest, (char *)s, c, n_str);
	return (dest);
}
