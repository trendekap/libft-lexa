/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:38:25 by gpolyxen          #+#    #+#             */
/*   Updated: 2021/10/23 20:05:46 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *memptr1, const void *memptr2, size_t num)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	if (num == 0)
		return (0);
	s1 = (unsigned char *) memptr1;
	s2 = (unsigned char *) memptr2;
	while (*s1 == *s2 && ++i < num)
	{
		s1++;
		s2++;
	}
	return ((int)(*s1 - *s2));
}
