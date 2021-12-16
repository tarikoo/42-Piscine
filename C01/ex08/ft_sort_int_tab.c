/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42kocaeli.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 03:22:01 by taysoy            #+#    #+#             */
/*   Updated: 2021/12/05 20:31:46 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	j;
	int	d;

	j = 0;
	while (j < size)
	{
		a = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a +1])
			{
				d = tab[a];
				tab[a] = tab[a +1];
				tab[a +1] = d;
			}
			a++;
		}
		j++;
	}
}
