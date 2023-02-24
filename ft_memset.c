/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 21:02:38 by lgonzal2          #+#    #+#             */
/*   Updated: 2022/10/18 11:36:28 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}
/*
int	main (void)
{
	int		c;
	size_t	n;
	char	s[] = "Habia una vez trus";

	c = 48;
	n = 5;
	memset(s, c, n);
	printf("%s\n", s);
	return (0);
}*/
