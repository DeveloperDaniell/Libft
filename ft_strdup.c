/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:19:27 by djelacik          #+#    #+#             */
/*   Updated: 2024/05/02 18:00:17 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*p;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	p = str;
	while (*s1)
	{
		*str++ = *s1++;
	}
	*str++ = 0;
	return (p);
}
/* #include <stdio.h>
int main()
{
	char s[] = "This is a test";
	printf("%s\n", ft_strdup(s));
} */