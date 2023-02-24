/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:38:07 by lgonzal2          #+#    #+#             */
/*   Updated: 2023/02/06 10:19:06 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*rtn;

	i = 0;
	while (s1[i] != '\0')
		i++;
	rtn = malloc(sizeof(char) * i + 1);
	if (rtn == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		rtn[i] = s1[i];
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
/*
int	main ()
{
	const char str1[] = "Largo largo largo";
	const char *rtno;
	const char *rtnc;
		
	rtno = strdup(str1);
	rtnc = ft_strdup(str1);
	printf("O: En %p está %c\n", &rtno, *rtno);
	printf("C: En %p está %c\n", &rtnc, *rtnc);
	printf("o: %s\n", rtno);
	printf("c: %s\n", rtnc);
	return (0);
}*/
