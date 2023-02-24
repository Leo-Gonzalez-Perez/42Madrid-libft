/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:39:29 by lgonzal2          #+#    #+#             */
/*   Updated: 2022/10/18 13:55:41 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	x;
	int	lens1;

	if (!(s1 != '\0'))
		return (0);
	lens1 = ft_strlen(s1);
	i = 0;
	x = lens1 - 1;
	while (i <= lens1 / 2 && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (x >= lens1 / 2 && ft_strchr(set, s1[x]) != NULL)
		x--;
	if (i > x)
		return (ft_strdup(""));
	lens1 = x - i;
	return (ft_substr(s1, i, lens1 + 1));
}
/*int main(void)
{
	char	s1[] = "";
	char	set[] = "";
	char	*rtn;

	rtn = ft_strtrim(s1, set);
	printf("%s\n", rtn);
	return (0);
}*/
