/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:33:31 by kcrius            #+#    #+#             */
/*   Updated: 2021/10/21 14:49:57 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

static char	*ft_save(void)
{
	char	*num;

	num = (char *)malloc(12 * sizeof(char));
	if (!num)
		return ((void *)0);
	num[0] = '-';
	num[1] = '2';
	num[2] = '1';
	num[3] = '4';
	num[4] = '7';
	num[5] = '4';
	num[6] = '8';
	num[7] = '3';
	num[8] = '6';
	num[9] = '4';
	num[10] = '8';
	num[11] = '\0';
	return (num);
}

static int	size_for_mall(int n)
{
	int	count;

	count = 0;
	if (n == (-2147483648))
		return (11);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 9)
	{
		count++;
		n /= 10;
	}
	return (++count);
}

char	*ft_itoa(int n)
{
	char	*newstr;
	int		degree;

	degree = size_for_mall(n);
	if (n == -2147483648)
		return (ft_save());
	newstr = (char *)malloc(sizeof(char) * (degree + 1));
	if (!newstr)
		return (NULL);
	if (n < 0)
	{
		newstr[0] = '-';
		n = -n;
	}
	newstr[degree] = '\0';
	degree--;
	while (n > 9)
	{
		newstr[degree] = n % 10 + '0';
		n = n / 10;
		degree--;
	}
	newstr[degree] = n + '0';
	return (newstr);
}
