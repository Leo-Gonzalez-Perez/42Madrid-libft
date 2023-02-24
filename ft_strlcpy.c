/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:35:44 by lgonzal2          #+#    #+#             */
/*   Updated: 2022/10/18 11:48:49 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	while (src[l] != '\0')
		l++;
	if (dst == NULL)
		return (l);
	if (dstsize != 0)
	{
		while ((src[i] != '\0') && (i < (dstsize - 1)))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (l);
}
/*
int	main(void)
{
	size_t	dstsize;
	size_t	rtno;
	size_t	rtnc;
	const char	src[]= "lorem ipsum dolor sit amet";
	char		dst[]= "iii";

	dstsize = 5;
	rtno = strlcpy(dst, src, dstsize);
	rtnc = ft_strlcpy(dst, src, dstsize);
	printf("O: %zu\n", rtno);
	printf("C: %zu\n", rtnc);
	return(0);
}*/
