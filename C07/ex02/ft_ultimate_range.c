/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:56:49 by taysoy            #+#    #+#             */
/*   Updated: 2021/12/15 22:34:05 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_size(int min, int max)
{
	return (max - min);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	*d;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	d = ((tab = (int *)malloc(sizeof(int) * ft_size(min, max))));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	while (i < ft_size(min, max))
	{
		tab[i] = min + i;
		i++;
	}
	return (ft_size(min, max));
}
