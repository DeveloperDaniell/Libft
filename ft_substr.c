/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:45:52 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/22 16:52:56 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	char	*p;

	if (!s || !len)
		return (NULL);
	if (len > ft_strlen(s))
	{
		len = ft_strlen(s) - start;
	}
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	p = buffer;
	while (*s && len--)
	{
		*buffer++ = *s++ + start;
	}
	*buffer++ = 0;
	return (p);
}
/* #include <stdio.h>
int main()
{
	char s1[] = "";

	printf("%s\n", ft_substr(s1, 1, 1));
} */