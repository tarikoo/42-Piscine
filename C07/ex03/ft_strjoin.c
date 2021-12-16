/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:26:49 by taysoy            #+#    #+#             */
/*   Updated: 2021/12/15 22:34:24 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_finallen(char **strings, int size, int seplen)
{
	int	finallen;
	int	i;

	finallen = 0;
	i = 0;
	while (i < size)
	{
		finallen += ft_strlen(strings[i]);
		finallen += seplen;
		i++;
	}
	finallen -= seplen;
	return (finallen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		finallen;
	int		i;
	char	*string;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	finallen = ft_finallen(strs, size, ft_strlen(sep));
	d = ((string = (char *)malloc((finallen + 1) * sizeof(char))));
	if (!d)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(d, strs[i]);
		d += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_strlen(sep);
		}
		i++;
	}
	*d = '\0';
	return (string);
}
