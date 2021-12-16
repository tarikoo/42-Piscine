/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42kocaeli.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 01:35:13 by taysoy            #+#    #+#             */
/*   Updated: 2021/11/30 22:07:09 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	o;
	int	s;

	s = 0;
	while (s < size / 2)
	{
		o = tab[s];
		tab[s] = tab[size - s - 1];
		tab[size - s - 1] = o;
		s++;
	}
}
