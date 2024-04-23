/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:07:24 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/19 17:04:26 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	char	*p;

	buffer = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!buffer)
		return (NULL);
	p = buffer;
	while (*s1)
		*buffer++ = *s1++;
	while (*s2)
		*buffer++ = *s2++;
	*buffer++ = 0;
	return (p);
}
/* int main()
{
	char s1[] = "Hello ";
	char s2[] = "World!";

	printf("This is the substring: %s\n", ft_strjoin(s1, s2));
} */