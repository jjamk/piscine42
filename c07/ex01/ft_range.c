/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 00:33:42 by skang             #+#    #+#             */
/*   Updated: 2020/02/05 01:16:07 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *a;
	int size;
	int i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	a = malloc(sizeof(int) * size);
	if (a == NULL)
		return (NULL);
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
