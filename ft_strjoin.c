/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:46:06 by lgonzal2          #+#    #+#             */
/*   Updated: 2023/02/18 14:38:22 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*rtn;

	i = 0;
	j = 0;
	rtn = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (rtn == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		rtn[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		rtn[i] = s2[j];
		i++;
		j++;
	}
	rtn[i] = '\0';
	return (rtn);
}
/*
int	main (void)
{
	char 	s1[] = "Perro y ";
	char 	s2[] = "gato";
	char	*rtn;

	rtn = ft_strjoin(s1, s2);
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("rtn: %s\n", rtn);
	free(rtn);
//	system("leaks -q a.out");
	return (0);
}*/
