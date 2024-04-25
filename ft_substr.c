/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:45:52 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/25 15:21:36 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	char	*p;

	if (!s || !*s)
		return (ft_strdup(""));
	if (!len || start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	buffer = (char *)malloc(sizeof(char) * (len));
	if (!buffer)
		return (NULL);
	p = buffer;
	while (len--)
		*buffer++ = *(s++ + start);
	*buffer++ = 0;
	return (p);
}
/* #include <stdio.h>
int		main()
{
	printf("%s\n", ft_substr("hola", 2, 1));
} */