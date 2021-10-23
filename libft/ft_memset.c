/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:27:34 by gpolyxen          #+#    #+#             */
/*   Updated: 2021/10/23 19:40:50 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *buf, int val, size_t count)
{
	unsigned char	*bufz;

	bufz = (unsigned char *)buf;
	while (count > 0)
	{
		bufz[count - 1] = val;
		count--;
	}
	return (buf);
}
