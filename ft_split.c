/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:03:55 by lgonzal2          #+#    #+#             */
/*   Updated: 2023/02/18 14:31:10 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	void	ft_free(char **res)
{
	int	i;

	i = -1;
	while (res[++i])
		free(res[i]);
	free(res);
}

static	size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
			words++;
		i++;
	}
	return (words);
}

static	char	**write_result(char const *s, char c, char	**res)
{
	size_t	start;
	size_t	i;
	size_t	word;

	start = 0;
	i = 0;
	word = 0;
	while (s[i] != 0)
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
		{
			res[word] = ft_substr(s, start, i - start + 1);
			if (!res[word])
			{
				ft_free(res);
				return (0);
			}
			word++;
		}
		if (s[i] == c && (s[i + 1] != c || s[i + 1] != '\0'))
			start = i + 1;
		i++;
	}
	res[word] = 0;
	return (res);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	char	**res;

	i = 0;
	if (s == 0)
		return (0);
	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (res == 0)
		return (0);
	res = write_result(s, c, res);
	return (res);
}
/*
int	main(void)
{
	const char	*s = "ungelefantegsegbalanceaba";
	char		**rtn;
	char		c;

	c = 'g';
	rtn = ft_split(s, c);
	printf("s[0]: %s\n", rtn[0]);
	printf("s[1]: %s\n", rtn[1]);
	printf("s[2]: %s\n", rtn[2]);
	printf("s[3]: %s\n", rtn[3]);
//	system ("leaks -q a.out");
	return (0);
}*/
