/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:33:45 by lgonzal2          #+#    #+#             */
/*   Updated: 2023/02/18 14:08:04 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_atoi(const char *str)
{
    long int    num;
    int         sign;
    num = 0;
    sign = 1;
    if (!(*str))
        return (0);
    while (*str == 32 || (*str >= 9 && *str <= 13))
            str++;
        if (*str == '-' || *str == '+')
        {
            if (*str == '-')
                sign = -1;
            str++;
        }
    while (*str && (*str >= '0' && *str <= '9'))
    {
        num = (*str - 48) + (num * 10);
        str++;
    }
    return (num * sign);
}
/*#include "libft.h"

static int	aux(const char *str, int i)
{
	int	flg;
	int	rtn;

	flg = 1;
	rtn = 0;
	if (str[i] == 43)
		i++;
	else if (str[i] == 45)
	{
		flg *= -1;
		i++;
	}
	if (str[i] >= 48 && str[i] <= 57)
	{
		rtn = rtn + str[i] - 48;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		rtn = rtn * 10 + str[i] - 48;
		i++;
	}
	return (rtn * flg);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (!((str[i] == 43) || (str[i] == 45) || (str[i] >= 48 && str[i] <= 57)))
		return (0);
	result = aux(str, i);
	return (result);
}

int main(void)
{
    int valo;
	int valc;
    char string[] = "   -0836 922kkk";

	valo = atoi(string);
	printf("%s\n", string);
	printf("o: %d\n", valo);
	valc = ft_atoi(string);
	printf("c: %d\n", valc);
    return (0);
}*/
