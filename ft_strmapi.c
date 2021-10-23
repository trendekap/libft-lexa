/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:35:28 by kcrius            #+#    #+#             */
/*   Updated: 2021/10/19 18:24:15 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mod;
	int		i;

	i = 0;
	if (!(s) || !(f))
		return (NULL);
	mod = malloc(ft_strlen(s) + 1);
	if (!mod)
		return (NULL);
	while (s[i])
	{
		mod[i] = f(i, s[i]);
		i++;
	}
	mod[i] = '\0';
	return (mod);
}
