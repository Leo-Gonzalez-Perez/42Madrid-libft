/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:49:34 by lgonzal2          #+#    #+#             */
/*   Updated: 2022/10/18 14:16:23 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	lenght(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*rtn;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = lenght(s);
	rtn = (char *)malloc((sizeof(char) * len) + 1);
	if (rtn == 0)
		return (0);
	while (i < len)
	{
		rtn[i] = f(i, s[i]);
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
