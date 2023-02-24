/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:05:21 by lgonzal2          #+#    #+#             */
/*   Updated: 2022/10/18 11:54:46 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c = c + 32;
	return (c);
}
/*
int	main(void)
{
	int	rtrn;
	int	a;
	
	a = '-';
	printf("%c\n", a);
	rtrn = ft_tolower(a);
	printf("%c\n", rtrn);
	return (0);
}*/
