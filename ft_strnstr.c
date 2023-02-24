/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:17:47 by lgonzal2          #+#    #+#             */
/*   Updated: 2022/10/18 12:13:44 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)&(haystack[h]));
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}
/* usando los printf me da segmentation fault
int	main (void)
{
    const char    hay[] = "l";
    const char    nee[] = "x";
//	char		*rtno;
	char		*rtnc;
    size_t    l;

	l = 40;
//	rtno = strnstr(hay, nee, l);
	rtnc = ft_strnstr(hay, nee, l);
//	printf("or: %p\n", rtno);
//	printf("or: %c\n", *rtno);
//	printf("co: %p\n", rtnc);
//	printf("co: %c\n", *rtnc);
    return (0);
}*/
