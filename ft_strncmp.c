/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:37:51 by lgonzal2          #+#    #+#             */
/*   Updated: 2022/10/18 12:04:53 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	snd;

	i = 0;
	snd = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			snd = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (snd);
		}
		else if (s1[i] == '\0' || s2[i] == '\0')
			return (snd);
		else
			i++;
	}
	return (snd);
}
/*
int	main(void)
{
	unsigned int	rtno;
	unsigned int	rtnc;
	size_t	n;
	const char	*str1;
	const char	*str2;

	n = 6;
	str1 = "123";
	str2 = "1234567";
	rtno = strncmp(str1, str2, n);
	rtnc = ft_strncmp(str1, str2, n);
	printf("o: %d\n", rtno);
	printf("c: %d\n", rtnc);
	return (0);
}*/
