/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:33:41 by kcrius            #+#    #+#             */
/*   Updated: 2021/10/19 18:06:35 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p1;
	char	*p2;

	p1 = (char *) dst;
	p2 = (char *) src;
	if (dst == src)
		return (dst);
	while (n > 0)
	{
		p1[n - 1] = p2[n - 1];
		--n;
	}
	return (dst);
}
