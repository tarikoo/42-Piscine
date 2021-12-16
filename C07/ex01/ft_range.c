/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:38:09 by taysoy            #+#    #+#             */
/*   Updated: 2021/12/15 22:33:45 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_size(int min, int max)
{
	return (max - min);
}

int	*ft_range(int min, int max)
{
	int	*dest;
	int	*d;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	d = ((dest = (int *)malloc(sizeof(int) * ft_size(min, max))));
	if (!d)
		return (0);
	while (i < ft_size(min, max))
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
