/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 17:11:07 by skang             #+#    #+#             */
/*   Updated: 2020/02/05 22:12:32 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_length(int size, char **strs, char *sep)
{
	int i;
	int sum;

	sum = 0;
	i = 0;
	while (i < size)
	{
		sum = sum + ft_strlen(strs[i]);
		i++;
	}
	sum = sum + ft_strlen(sep) * (size - 1) + 1;
	return (sum);
}

char		*ft_result(char *temp, char *strs)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (temp[i] != '\0')
		i++;
	while (strs[j] != '\0')
	{
		temp[i + j] = strs[j];
		j++;
	}
	temp[i + j] = '\0';
	return (temp);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int j;
	char *temp;

	if (size == 0)
	{
		temp = malloc(sizeof(char));
		*temp = 0;
		return (temp);
	}
	i = 0;
	j = 0;
	temp = malloc(sizeof(char) * ft_length(size, strs, sep));
	if (temp == NULL)
		return (0);
	*temp = 0;
	while (i < size)
	{
		ft_result(temp, strs[i]);
		if (i + 1 < size)
			ft_result(temp, sep);
		i++;
	}
	return (temp);
}
#include <stdio.h>

int main()
{
	int i;

	i = 0;
	char *str[] = {"dfd","ee","rr"};
	char *sep = "1";
	printf("%s", ft_strjoin(3, str, sep));
}
	
