/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 01:20:07 by skang             #+#    #+#             */
/*   Updated: 2020/02/05 16:09:06 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;
	int *temp;

	size = max - min;
	temp = (int*)malloc(sizeof(int) * size);
	i = 0;
	if (min >= max)
		return (0);
	if (temp == NULL)
		return (-1);
	while (min < max)
	{
		temp[i] = min;
		min++;
		i++;
	}
	*range = temp;
	return (size);
}
