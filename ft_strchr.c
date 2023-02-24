/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:33:57 by lgonzal2          #+#    #+#             */
/*   Updated: 2023/01/13 20:00:42 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char) c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	const char s[] = "abcdefghijklmnop";
	int	c;

	c = '\0';	
	printf("s = %s\n", s);
	printf("c = %c\n", c);
	printf("rtnc: %p y %d\n", ft_strchr(s, c), *(ft_strchr(s, c)));
	printf("rtno: %p y %d\n", strchr(s, c), *(strchr(s, c)));
	return 0;
}*/
