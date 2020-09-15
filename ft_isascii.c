/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 09:56:03 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/08 09:56:18 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	else
		return (0);
}
