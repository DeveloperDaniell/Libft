/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:12:06 by djelacik          #+#    #+#             */
/*   Updated: 2024/05/02 16:37:10 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/* #include <stdio.h>
#include <string.h>
int main()
{
	char h[] = "MZIRIBMZIRIBMZE123";
	char n[] = "MZIRIBMZE";

	printf("%s\n", ft_strnstr(h, n, 100));
	printf("%s\n", strnstr(h, n, 100));

} */