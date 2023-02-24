/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:58:53 by lgonzal2          #+#    #+#             */
/*   Updated: 2023/02/18 14:09:11 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strdup2(const char *s1)
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

static unsigned int	ft_strlen2(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	count;
	size_t	size;
	char	*rtn;

	if (s == NULL)
		return (NULL);
	if (ft_strlen2(s) < start)
		return (ft_strdup2(""));
	size = ft_strlen2(s + start);
	if (size < len)
		len = size;
	rtn = (char *)malloc((len + 1) * sizeof(char));
	if (rtn == NULL)
		return (NULL);
	count = 0;
	while (count < len)
	{
		rtn[count] = s[start + count];
		count++;
	}
	rtn[count] = '\0';
	return (rtn);
}
/*#include <stdio.h>
int	main(void)
{
	unsigned int	start;
	char const	s[] = "El arbol de la torre de Martinez.\nCabballo que no galopa";
	size_t	len;
	char	*rsltc;

	start = 0;
	len = 33;
	rsltc = ft_substr(s, start, len);
	printf("Principal: %s\n", s);
	printf("Result c: %s\n", rsltc);
	return(0);
}*/
