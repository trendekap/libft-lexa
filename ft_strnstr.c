/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:35:34 by kcrius            #+#    #+#             */
/*   Updated: 2021/10/19 18:25:11 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	str_len;

	ft_strlen(haystack);
	if (!needle[0])
		return ((char *)haystack);
	str_len = ft_strlen(needle);
	while (len >= str_len && *haystack)
	{
		if (!(ft_strncmp(haystack, needle, str_len)))
			return ((char *)haystack);
		++haystack;
		--len;
	}
	return (NULL);
}
