/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzal2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:14:10 by lgonzal2          #+#    #+#             */
/*   Updated: 2022/10/18 11:45:59 by lgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*temp;
	char	*finish;

	temp = (char *)src;
	finish = (char *)dst;
	if (temp < finish)
	{
		while (n != '\0')
		{
			n--;
			finish[n] = temp[n];
		}
	}
	else
		ft_memcpy(finish, temp, n);
	return (dst);
}
/*
int    main(void)
{
    char    src[] = "con\0sec\0\0te\0tur";
    char    dst[] = "orem ipsum dolor sit amet";
    size_t    len;

    len = 10;
    printf("O: %s\n", memmove(dst, src, len));
    printf("C: %s\n", ft_memmove(dst, src, len));
    write(1, dst, 22);
    return (0);
}*/
