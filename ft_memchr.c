/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:23:23 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/18 15:33:10 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == ((unsigned char)c))
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "";
	int size = 3;
	printf("%s\n", ft_memchr(str, 'y', sizeof(str)));
	printf("%s\n", memchr(str, 'y', sizeof(str)));

}*/