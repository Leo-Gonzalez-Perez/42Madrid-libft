/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:22:57 by lgonzal2          #+#    #+#             */
/*   Updated: 2022/10/18 12:08:18 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptrs;
	unsigned char	new_c;

	i = 0;
	ptrs = (unsigned char *)s;
	new_c = (unsigned char)c;
	while (i < n)
	{
		if (ptrs[i] == new_c)
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const	char s[] = "texto de prueba";
	size_t	n;
	int		c;
	void	*rtno;
	void	*rtnc;

	n = 3;
	c = 'e';
	rtno = memchr(s, c, n);
	rtnc = ft_memchr(s, c, n);
	printf("o: %p y %c\n", &rtno, *((char *)rtno));
	printf("c: %p y %c\n", &rtnc, *((char *)rtnc));
	return(0);
}*/
