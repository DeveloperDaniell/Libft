/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:14:47 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/18 13:18:27 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lst;

	lst = NULL;
	while (*s)
	{
		if (*s == (char)c)
			lst = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (lst);
}
/* #include <stdio.h>
int main()
{
    char str[] = "This is a test";
    printf("%s\n", ft_strrchr(str, '\0'));
} */