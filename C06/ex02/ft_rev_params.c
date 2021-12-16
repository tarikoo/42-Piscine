/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 02:44:57 by taysoy            #+#    #+#             */
/*   Updated: 2021/12/15 22:26:08 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	k;

	i = ac - 1;
	while (i > 0)
	{
		k = 0;
		while (av[i][k] != '\0')
		{
			ft_putchar(av[i][k]);
			k++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
