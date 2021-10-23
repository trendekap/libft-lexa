/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:35:17 by kcrius            #+#    #+#             */
/*   Updated: 2021/10/21 16:27:23 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	while (dst[i] && i < dstsize)
		++i;
	while ((l + i + 1) < dstsize && src[l])
	{
		dst[i + l] = src[l];
		l++;
	}
	if (i != dstsize)
		dst[i + l] = '\0';
	return (i + ft_strlen(src));
}
