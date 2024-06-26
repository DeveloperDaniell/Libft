/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:45:52 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/25 18:48:54 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;

	if (!s || !*s)
		return (ft_strdup(""));
	if (!len || start > ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	buffer = ft_calloc(len + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, &s[start], len + 1);
	return (buffer);
}
/* #include <stdio.h>
int		main()
{
	printf("%s\n", ft_substr("hola", 2, 3)); 
	//: expected 3 bytes, allocated 4 bytes
}
 */
