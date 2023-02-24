/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:15:33 by lgonzal2          #+#    #+#             */
/*   Updated: 2023/02/18 14:05:28 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static void	positnbr(unsigned int number, char *str, int len)
{
	while (number > 0)
	{
		str[len--] = '0' + (number % 10);
		number = number / 10;
	}
}

static int	length(int nb)
{
	int	l;

	l = 0;
	if (nb <= 0)
		l++;
	while (nb != 0)
	{
		nb = nb / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int nb)
{
	int				len;
	char			*str;
	unsigned int	number;

	len = length(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		number = nb * -1;
		str[0] = '-';
	}
	else
		number = nb;
	positnbr(number, str, len);
	return (str);
}
/*
int	main(void)
{
	int	nb;
	char	*rtn;

	nb = 0;
	rtn = ft_itoa(nb);
	printf("%s\n", rtn);
	nb = -2;
	rtn = ft_itoa(nb);
	printf("%s\n", rtn);
	nb = -22234;
	rtn = ft_itoa(nb);
	printf("%s\n", rtn);
	nb = 423424;
	rtn = ft_itoa(nb);
	printf("%s\n", rtn);
	return(0);
}*/
