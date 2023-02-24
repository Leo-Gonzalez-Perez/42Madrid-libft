/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:10:42 by lgonzal2          #+#    #+#             */
/*   Updated: 2022/10/18 12:19:25 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	int			flg;
	const char	*rtn;

	rtn = 0;
	i = 0;
	flg = 0;
	if ((char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			rtn = &s[i];
		i++;
	}
	return ((char *)rtn);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	const char	s[] = "Hola migos";
	int	c = 'a';
	char	*resulto;
	char	*resultc;
	
	printf("s = %s\n", s);
	printf("d = %c\n", c);
	resulto = strrchr(s, c);
	resultc = ft_strrchr(s, c);
	printf("o : %p y %c\n", &resulto, *resulto);
	printf("c : %p y %c\n", &resultc, *resultc);
	return 0;
}*/
