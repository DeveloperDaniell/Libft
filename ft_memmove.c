/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:22:14 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/17 17:18:16 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	move_forward(unsigned char *d, const unsigned char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
}

static void	move_backward(unsigned char *d, const unsigned char *s, size_t len)
{
	while (len > 0)
	{
		len--;
		d[len] = s[len];
		printf("%s\n", d);
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < s)
		move_forward(d, s, len);
	else
		move_backward(d, s, len);
	return (dst);
}
/*
#include <stdio.h>
int main()
{
	char src[30] = "test";
	char dest[50] = "1234567";
	
	printf("Address of src:%p\n", &src);
	printf("Address of dest:%p\n", &dest);
	int n = 4;
	ft_memmove(dest, src, n);
	printf("%s\n", dest);
	return 0;
}*/
