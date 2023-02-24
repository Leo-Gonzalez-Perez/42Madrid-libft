/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:52:38 by lgonzal2          #+#    #+#             */
/*   Updated: 2023/02/18 14:56:05 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;
	
	i = 0;
	if (!s || s == NULL)
		return (i);
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int	main (void)
{
//	const char	*str = 0;
	size_t		rtn;

	rtn = 0;
	rtn = ft_strlen(((void *)0));
	printf ("%zu\n", rtn);
	return (0);
}*/
