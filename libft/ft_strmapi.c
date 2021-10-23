/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:39:31 by gpolyxen          #+#    #+#             */
/*   Updated: 2021/10/23 19:41:23 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = -1;
	if (!s)
		return (0);
	str = malloc((size_t)ft_strlen((char *)s) + 1);
	if (!s || !str)
		return (NULL);
	while (s[++i])
	{
		str[i] = f(i, s[i]);
	}
	str[i] = '\0';
	return (str);
}
