/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:12:06 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/18 17:10:03 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*h;
	char	*n;

	if (*needle == 0)
		return ((char *)haystack);
	n = (char *)needle;
	while (*haystack)
	{
		h = (char *)haystack;
		while (*haystack && *haystack && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return (h);
		haystack = ++h;
		needle = n;
	}
	return (NULL);
}
/* #include <stdio.h>
int main()
{
	char h[] = "This is the test haystack";
	char n[] = "";

	printf("%s\n", ft_strstr(h, n));
} */