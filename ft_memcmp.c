/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:26:32 by lgonzal2          #+#    #+#             */
/*   Updated: 2022/10/18 12:10:05 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				snd;
	unsigned char	*cs1;
	unsigned char	*cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	i = 0;
	snd = 0;
	while (i < n)
	{
		if (cs1[i] != cs2[i])
		{
			snd = cs1[i] - cs2[i];
			return (snd);
		}
		else
			i++;
	}
	return (snd);
}
/*
int	main(void)
{
	int		rtn;
	int		n;
	char	*str1;
	char	*str2;

	n = 3;
	str1 = "12";
	str2 = "123451111 ";
	rtn = ft_memcmp(str1, str2, n);
	printf("%d\n", rtn);
	return (0);
}
Compara los primeros n caracteres del objeto apuntado por s1 (interpretado
como unsigned char) con los primeros n caracteres del objeto apuntado
por s2 (interpretado como unsigned char).
Valor de retorno:
La función retorna un número entero mayor, igual, o menor que cero,
apropiadamente según el objeto apuntado por s1 es mayor, igual, o menor
que el objeto apuntado por s2*/
