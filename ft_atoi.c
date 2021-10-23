/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:32:51 by kcrius            #+#    #+#             */
/*   Updated: 2021/10/21 14:23:02 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		j;
	long	sum;

	j = 1;
	sum = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		j = 1 - 2 * (str[i++] == '-');
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		sum = sum * 10 + (str[i] - '0');
		i++;
		if (sum > 2147483648 && j == -1)
			return (0);
		if (sum > 2147483647 && j == 1)
			return (-1);
	}
	return ((int) sum * j);
}
