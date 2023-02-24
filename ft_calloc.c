/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:51:53 by lgonzal2          #+#    #+#             */
/*   Updated: 2022/10/26 11:17:43 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;

	if (count <= 0 || size <= 0)
		ptr = (unsigned char *)malloc(0);
	else
		ptr = (unsigned char *)malloc(count * size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	return (ft_memset(ptr, 0, count * size));
}
/*
int	main (void)
{
	size_t	c;
	size_t	s;
	void	*rslto;
	void	*rsltc;

	c = 0;
	s = 0;
	rslto = calloc(c, s);
	rsltc = ft_calloc(c, s);
	printf("O: %p\n", rslto);
	printf("C: %p\n", rsltc);
	return 0;
}*/
