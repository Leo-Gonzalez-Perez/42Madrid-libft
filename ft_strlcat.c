/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:01:43 by lgonzal2          #+#    #+#             */
/*   Updated: 2022/11/11 17:08:13 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldest;
	size_t	lsrc;
	size_t	i;

	i = 0;
	lsrc = 0;
	ldest = 0;
	while (src[lsrc] != '\0')
		lsrc++;
	while (dst[ldest] != '\0')
		ldest++;
	if (dstsize <= ldest)
		return (dstsize + lsrc);
	while (src[i] != '\0' && (ldest + i) < (dstsize -1))
	{
		dst[ldest + i] = src[i];
		i++;
	}
	dst[ldest + i] = '\0';
	return (ldest + lsrc);
}
/*
#include <stdio.h>
int	main(void)
{
	size_t	size;
	size_t	rtn;
	char	src[] = "";
	char	dest[18] = "";

	size = 0;
	printf("%s\n", src);
	printf("%s\n", dest);
	rtn = ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("%zu\n", rtn);
	rtn = strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("%zu\n", rtn);
	return(0);
}*/
