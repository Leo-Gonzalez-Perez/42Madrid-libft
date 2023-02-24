/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:59:12 by lgonzal2          #+#    #+#             */
/*   Updated: 2022/10/18 11:41:34 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == 0 && src == 0)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return ((char *)dst);
}
/*
int	main(void)
{
	char	dst[] = "peace and love";
	const char	src[] = "war and Putin";
	void	*rtno;
	void	*rtnc;
	size_t	n;
	
	n = 8;
	rtno = memcpy(dst, src, n);
	rtnc = ft_memcpy(dst, src, n);
	printf("o: %p - %s.\n", &rtno, rtno);
	printf("c: %p - %s.\n", &rtnc, rtnc);
	return(0);
}*/
