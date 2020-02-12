/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 22:23:23 by skang             #+#    #+#             */
/*   Updated: 2020/02/07 16:27:39 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int		ft_notation(int *a, int not, int cnt)
{
	int				num;
	int				i;
	int				j;

	j = 2;
	num = a[cnt - 1];
	while (cnt - 1 > 0)
	{
		i = 1;
		while (i < j)
		{
			a[cnt - 2] *= not;
			i++;
		}
		num += a[cnt - 2];
		cnt--;
		j++;
	}
	return (num);
}

int		ft_find(char *str, char *base, int not)
{
	int				i;
	int				j;
	int				a[8];
	int				cnt;

	i = 0;
	cnt = 0;
	j = 0;
	while (*str != '\0')
	{
		if (base[i] == *str)
		{
			a[j] = i;
			str++;
			j++;
			cnt++;
			i = 0;
		}
		else
			i++;
	}
	return (ft_notation(a, not, cnt));
}

int		ft_atoi(char *str, char *base, int not)
{
	int				i;
	int				m;

	i = 0;
	m = 0;
	if (str[i] == '\0' || str[i] == ' ')
		return (0);
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m++;
		i++;
	}
	if (m % 2 != 0)
		return (-ft_find(&str[i], base, not));
	else
		return (ft_find(&str[i], base, not));
}

int		ft_iswrong(char *base, int not)
{
	int				i;
	int				j;

	i = 0;
	j = 1;
	if (base[i] == '\0' || not < 2)
		return (1);
	while (base[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int				not;

	not = 0;
	while (base[not] != '\0')
		not++;
	if (ft_iswrong(base, not))
		return (0);
	return (ft_atoi(str, base, not));
}
