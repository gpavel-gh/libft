/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 09:38:02 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/16 12:44:15 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len(long n)
{
	int		lenth;

	lenth = 0;
	if (n < 0)
	{
		n = n * -1;
		lenth++;
	}
	if (n == 0)
		lenth++;
	while (n > 0)
	{
		n = n / 10;
		lenth++;
	}
	return (lenth);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nb;

	nb = n;
	i = len(nb);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (str);
	str[i--] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[i] = (nb % 10) + 48;
		nb = nb / 10;
		i--;
	}
	return (str);
}
