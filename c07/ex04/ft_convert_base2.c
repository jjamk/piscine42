/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:35:45 by skang             #+#    #+#             */
/*   Updated: 2020/02/07 16:27:30 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_iswrong(char *base, int not);
int ft_atoi(char *str, char *base, int not);
int ft_atoi_base(char *str, char *base);

unsigned int		ft_blen(char *base)
{
	unsigned int count;

	count = 0;
	while (base[count])
	{
		count++;
	}
	return (count);
}

char				*ft_notation(int nbr, int not, char *base)
{
	char a[];
	int cnt;
	int i;

	a[0] = 0;;
	cnt = 0;
	i = 0;
	//if (nbr == -2147483648)
	//{
	//	ft_notation(nbr / not, not, base);
	//	&base[-(nbr % not
	//	return (NULL);
	//}
	if (nbr < 0)
	{
		cnt++;
		ft_notation(-nbr, not, base);
	}
	if (nbr > not - 1)
		ft_notation(nbr / not, not, base);
	while (i < cnt)
	{
		a[i] = base[nbr % not] + '0';
		i++;
	}
	return (a);
}

int		ft_size(char *a)
{
	int cnt;
	int i;

	cnt = 0;
	i = 0;
	while (a[i] != 0)
	{
		cnt++;
		i++;
	}
	return (cnt);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char *temp;
	int num;
	int not;
	int size;

	if (ft_iswrong(base_from, ft_size(base_from)) \
				|| ft_iswrong(base_to, ft_size(base_to)))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	not = ft_blen(base_to);
	size = ft_size(ft_notation(num, not, base_to));
	temp = malloc(sizeof(char) * size + 1);
	if (!temp)
		return (NULL);
	temp = ft_notation(num, not, base_to);
	return (temp);
}

#include <stdio.h>
int main()
{
	char *nbr = "	-1234";
	char *a = "0123456789";
	char *b = "0123456789abcdef";
	printf("%s", ft_convert_base(nbr, a, b));
}
	
