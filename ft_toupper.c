/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:53:52 by lgonzal2          #+#    #+#             */
/*   Updated: 2022/10/18 11:53:37 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c = c - 32;
	return (c);
}
/*
int	main(void)
{
	int	ch= '7';
	int	rtn;

	printf("%c\n", ch);
	rtn = ft_toupper(ch);
	printf("%c\n", rtn);
	return (0);
}*/
