/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 08:37:43 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/19 10:43:13 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;

	if (!dst || !src)
		return (0);
	dstlen = ft_strlen(dst);
	if (dstsize != 0)
	{
		while (i < dstsize - dstlen - 1 && src[i])
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
	}
	return (ft_strlen(src) + ft_strlen(dst));
}
/* #include <stdio.h>
int main()
{
	char src[] = "12345";
	char dest[10] = "abcde";
	int nb = 0;

	printf("%zu\n", ft_strlcat(dest, src, nb));
	printf("%lu\n", strlcat(dest, src, nb));

	return 0;
} */